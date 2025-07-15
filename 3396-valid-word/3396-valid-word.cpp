class Solution {
public:
    bool isValid(string word) {
        bool d=false, u=false, l=false, v=false, c=false;
        if(word.length()<3)   return false;
        for(int i=0;i<word.length();i++)
        {
            if((word[i]>=97 && word[i]<=122) || (word[i]>=65 && word[i]<=90) || (word[i]>=48 && word[i]<=57)) l=true;
            else return false;
            if(word[i]=='a' || word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A' || word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U') v=true;
            else if((word[i]>=97 && word[i]<=122) || (word[i]>=65 && word[i]<=90)) c=true;
        }
        if(l&&v&&c)   return true;
        return false;
    }
};