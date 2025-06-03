class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        queue<int> q;
        int ans=0,n=candies.size();
        vector<int> v(n,0);
        for(int i=0;i<initialBoxes.size();i++)
        {
            q.push(initialBoxes[i]);
        }
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(int i=0;i<containedBoxes[x].size();i++)
                q.push(containedBoxes[x][i]);
            
            if(status[x]==1)
            for(int i=0;i<keys[x].size();i++)
            {
                status[keys[x][i]]=1;
            }
            v[x]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(status[i]==1 && v[i]==1)
                ans+=candies[i];
        }
        return ans;
    }
};