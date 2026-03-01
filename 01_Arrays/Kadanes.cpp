class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int glosum=INT_MIN;
        int currsum=0;
        for(int i =0;i<nums.size();i++)
        {
            currsum+=nums[i];
            glosum=max(currsum,glosum);
            if(currsum<0) currsum=0;
        }
        return glosum;
    }
};