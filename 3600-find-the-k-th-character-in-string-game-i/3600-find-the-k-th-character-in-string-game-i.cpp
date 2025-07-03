class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(k>s.length())
        {
            string temp="";
            for(int i=0;i<s.length();i++)
            {
                temp+=((s[i]+1)%97 + 'a');
            }
            s+=temp;
        }
        return s[k-1];
    }
};