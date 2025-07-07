class Solution {
public:
    static bool comp(vector<int> a, vector<int> b)
    {
        return (a[0]<b[0]) || (a[0]==b[0] && a[1]<b[1]);
    }
    int maxEvents(vector<vector<int>>& events) {
        int n=events.size();
        sort(events.begin(),events.end(),comp);
        int md=0;
        for(int i=0;i<n;i++)
        {
            if(md<events[i][1])
                md=events[i][1];
        }
        int ans=0;
        priority_queue<int, vector<int>, greater<> > pq;
        for(int i=0,j=0;i<=md;i++)
        {
            while(j<n && events[j][0]<=i)
            {
                pq.emplace(events[j][1]);
                j++;
            }
            while(!pq.empty() && pq.top()<i)
                pq.pop();
            if(!pq.empty())
            {
                pq.pop();
                ans++;
            }
        }
        return ans;
    }
};