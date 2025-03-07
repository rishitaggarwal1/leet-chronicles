class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> arr(right+1,true);
        for(int i=2;i*i<=right;i++)
        {
            if(arr[i])
            {
                for(int j=i*i;j<=right;j+=i)
                    arr[j]=false;
            }
        }
        arr[1]=false;
        int x=-1,y=-1, a=-1,b=-1;
        for(int i=left;i<=right;i++)
        {
            if(!arr[i]) continue;
            if(x==-1)
            {
                x=i; a=i;
            }
            else if(y==-1)
            {
                y=i; b=i;
            }
            else
            {
                if((b-a)>(i-y))
                {
                    a=y;
                    b=i;
                }
                x=y;
                y=i;
            }
        }
        vector<int> ans;
        if(x==-1 || y==-1)
            ans={-1,-1};
        else
            ans={a,b};
        return ans;
    }
};