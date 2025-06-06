class Solution {
public:
    string robotWithString(string s) {
        int n=s.length();
        vector<char> v(n,' ');
        v[n-1]=s[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(s[i]>v[i+1])
                v[i]=v[i+1];
            else
                v[i]=s[i];
        }
        stack<char> ss;
        string ans="";
        for(int i=0;i<n;i++)
        {
            while(!ss.empty() && ss.top()<=v[i] && ss.top()<=s[i])
            {
                ans+=ss.top();
                ss.pop();
            }
            if(s[i]<=v[i])
            {
                ans+=s[i];
            }
            else
                ss.push(s[i]);
        }
        while(!ss.empty())
        {
            ans+=ss.top();
            ss.pop();
        }
        return ans;
    }
};