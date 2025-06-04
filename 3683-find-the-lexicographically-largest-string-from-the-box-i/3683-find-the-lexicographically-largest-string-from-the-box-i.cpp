class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends==1)
            return word;
        int n=word.size();    
        int l=n-numFriends + 1;
        string result="";
        for(int i=0;i<n;i++)
        {
            int m=min(l,n-i);
            result = max(result,word.substr(i,m));
        }
        return result;
    }
};