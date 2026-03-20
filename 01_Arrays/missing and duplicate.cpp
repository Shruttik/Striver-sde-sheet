class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==2)
            {
                ans[0]=i;
                
            }
            else if(mp[i]==0)
            {
                ans[1]=i;
            }
        }
        
        return ans;
        
    }
};