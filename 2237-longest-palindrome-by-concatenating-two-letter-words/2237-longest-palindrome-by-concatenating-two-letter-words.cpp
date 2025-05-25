class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int> m;
        int ans=0,k=0;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
            string s=words[i];
            reverse(s.begin(),s.end());
            if(m.find(s)!=m.end() && m[s]>0)
            {
                if(s==words[i] && m[s]==2)
                {
                    ans+=4;
                    m[s]-=2;
                }
                else if(s!=words[i])
                {
                    ans+=4;
                    m[s]--;
                    m[words[i]]--;
                }
            }
        }
        for(auto i:m)
        {
            string s=i.first;
            reverse(s.begin(),s.end());
            if(i.second==1 && i.first==s)
            {
                ans+=2;
                break;
            }
        }
        return ans+k;
    }
};