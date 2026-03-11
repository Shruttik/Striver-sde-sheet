class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++)
        {
            set.insert(nums[i]);
        }
        
        int maxlength=0;
        for(int num:set)
        {
            int length=0;
            if(set.find(num-1)== set.end())
            {
                int seq=num;
                while(set.find(seq)!=set.end())
                {
                    length++;
                    seq++; 
                }
            }
            maxlength=max(maxlength,length);
        }
        return maxlength;
    }
};