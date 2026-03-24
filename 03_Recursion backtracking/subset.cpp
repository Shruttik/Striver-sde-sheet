class Solution {
public:
    void solve(int index, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans) {
        // Step 1: store current subset
        ans.push_back(ds);

        // Step 2: explore further elements
        for(int i = index; i < nums.size(); i++) {
            // take
            ds.push_back(nums[i]);

            // recurse
            solve(i + 1, nums, ds, ans);

            // backtrack (remove)
            ds.pop_back();
        }
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;

        solve(0, nums, ds, ans);
        return ans;
    }
};