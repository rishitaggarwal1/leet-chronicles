class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> m;
        int x;
        int n=grid.size();
        int ans=n*n*(n*n+1)/2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                m[grid[i][j]]++;
                if(m[grid[i][j]]==2)
                    x=grid[i][j];
                ans=ans-grid[i][j];
            }
        }
        return {x,ans+x};
    }
};