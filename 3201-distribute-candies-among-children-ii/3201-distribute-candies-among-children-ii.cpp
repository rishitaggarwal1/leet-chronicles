class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long ans=0;
        for(int i=max(0,n-2*limit);i<=min(n,limit);i++)
        {
            int N=n-i;
            int ch2min=max(0,N-limit);
            int ch2max=min(N,limit);
            ans+=(ch2max-ch2min)+1;
        }
        return ans;
    }
};