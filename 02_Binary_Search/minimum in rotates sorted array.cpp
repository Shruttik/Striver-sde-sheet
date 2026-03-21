class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans =INT_MAX;
        int low=0;
        int high =nums.size()-1;
        int mid;
        while(low<high)
        {
            mid = (low+high)/2;
            if(nums[mid]>nums[high])
            {
                low=mid+1;
            }
            else if(nums[mid]<nums[high])
            {
                high =mid;
            }
        }
        return nums[low];
    }
};