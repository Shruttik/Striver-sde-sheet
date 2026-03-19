class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            if(nums[i]==0)nums[i]=-1;
        }
        int maxlength =0;
        int presum=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i =0;i<n;i++)
        {
            presum+=nums[i];
            if(mp.find(presum)!=mp.end())
            {
                maxlength=max(maxlength,i-mp[presum]);
            }
            else
            {
                mp[presum]=i;
            }
        }
        return maxlength;

    }
};