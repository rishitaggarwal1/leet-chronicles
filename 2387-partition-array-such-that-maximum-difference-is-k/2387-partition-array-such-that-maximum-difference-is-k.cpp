class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0,right=0, n=nums.size(),ans=0;
        while(right<n)
        {
            if(nums[right]-nums[left]<=k)
                right++;
            else
            {
                left=right;
                ans++;
            }
        }
        return ans+1;
    }
};