class Solution {
public:
    int minimumCardPickup(vector<int>& nums) {

        int n = nums.size();
        int minL = INT_MAX;
        unordered_map<int,int> mpp;

        for (int i = 0; i<n; i++) {

            if (mpp.find(nums[i]) != mpp.end()) {
                minL = min( minL, i-mpp[nums[i]] +1);
            }

            mpp[nums[i]] = i;
        }

        return (minL == INT_MAX) ? -1: minL;

        
    }
};