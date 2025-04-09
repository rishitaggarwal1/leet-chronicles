class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int m=INT_MAX;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
            if(nums[i]<m)
                m=nums[i];
        }
        if(k>m)
            return -1;
        if(k<m)
            return s.size();
        return s.size()-1;
    }
};