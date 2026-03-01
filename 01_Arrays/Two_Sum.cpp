vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int change = target-nums[i];
            if(mp.find(change)!=mp.end())
            {
                return {mp[change],i};
            }
            mp[nums[i]]=i;
        }
        return {0,0};
    }