class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>& ans, vector<int>& ds, vector<bool>& visited)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return ;
        }
        for(int i=0; i<nums.size();i++)
        {
            if(!visited[i])
            {
                visited[i]=true;
                ds.push_back(nums[i]);
                solve(nums,ans,ds,visited);
                visited[i]=false;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<bool> visited(nums.size(),false);
        solve(nums,ans,ds,visited);
        return ans;
    }
};