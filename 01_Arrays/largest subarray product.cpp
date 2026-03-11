class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int currmax=1;
        int currmin =1;
        int globalmax=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int temp = currmax;
            currmax= max(nums[i],max(currmax*nums[i],currmin*nums[i]));
            currmin= min(nums[i],min(temp*nums[i],currmin*nums[i]));
            globalmax=max(globalmax,currmax);
        }
        return globalmax;
    }
};