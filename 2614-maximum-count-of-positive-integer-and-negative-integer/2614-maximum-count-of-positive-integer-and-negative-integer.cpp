class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        int posIndex = nums.size()-1;
        int negIndex = 0;
        while(start<=end)
        {
            int mid=start + (end-start)/2;
            if(nums[mid]<=0)
                start=mid+1;
            else
            {
                end=mid-1;
                posIndex=mid;
            }
            if(nums[mid]==0)
                posIndex=mid+1;
        }
        start = 0; end = nums.size() - 1;
        while(start<=end)
        {
            int mid=start + (end-start)/2;
            if(nums[mid]>=0)
                end=mid-1;
            else
            {
                start=mid+1;
                negIndex=mid;
            }
        }
        posIndex=nums.size()-posIndex;
        if(nums[0]!=0)
            negIndex++;
        return negIndex>posIndex?negIndex:posIndex;
    }
};