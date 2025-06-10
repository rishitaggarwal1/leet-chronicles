class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        int o=0,e=INT_MAX,ans;
        for(auto i:m)
        {
            if(i.second%2==0 && i.second<e)
                e=i.second;
            else if(i.second%2==1 && i.second>o)
                o=i.second;
        }
        return (o-e);
    }
};