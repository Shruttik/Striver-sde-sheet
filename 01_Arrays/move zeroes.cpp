class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int slow=0;
        int fast =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[fast]!=0)
            {
                swap(nums[slow],nums[fast]);
                slow++;
            }
            fast++;

        }
    }
};