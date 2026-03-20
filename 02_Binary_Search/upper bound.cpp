class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int low=0;
        int mid;
        int ans=arr.size();
        int high =arr.size()-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(arr[mid]>target)
            {
                ans =mid;
                high =mid-1;
            }
            else low=mid+1;
        }
        return ans;
        
    }
};
