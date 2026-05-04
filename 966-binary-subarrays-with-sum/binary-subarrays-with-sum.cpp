class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map<int , int> mpp;
        mpp[0] = 1;
        int n = nums.size();
        int sum = 0;
        int count = 0;

        for (int i = 0; i<n; i++) {

            sum += nums[i];
            int prev = sum - goal;

            if (mpp.find (prev) != mpp.end()) {
                count += mpp[prev];
            }

            mpp[sum]++;

        }

        return count;
        
    }
};