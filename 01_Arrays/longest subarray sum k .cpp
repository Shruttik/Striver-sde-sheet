class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int presum=0;
        int maxlength=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<arr.size();i++)
        {
            presum+=arr[i];
            if(presum==k)
            {
                maxlength=max(maxlength,i+1);
            }
            int diff = presum-k;
            if(mp.find(diff)!=mp.end())
            {
                maxlength=max(maxlength,i-mp[diff]);
            }
            if(mp.find(presum)==mp.end())
            {
                mp[presum]=i;
            }
        }
        return maxlength;
        
        
    }
};