class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int> m;
            int temp=0;
            for(int j=i;j<n;j++)
            {
                if(m.find(s[j])==m.end())
                {
                    m[s[j]]++;
                    temp++;
                }
                else
                    break;
            }
            if(ans<temp)
                ans=temp;
        }
        return ans;
    }
};