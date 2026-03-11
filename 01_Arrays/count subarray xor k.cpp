class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        long count=0;
        int n= arr.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        long prefixor=0;
        for(int  i=0;i<n;i++)
        {
            prefixor=prefixor^arr[i];
            if(mp.find(k^prefixor)!=mp.end())
            {
                count+=mp[k^prefixor];
            }
            mp[prefixor]++;
            
        }
        return count;
        
        
    }
};