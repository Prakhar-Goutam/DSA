class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        int n = nums.size();
        int l = 0;
        int sum = 0;
        int maxSum = 0;
        unordered_map<int,int> mpp;

        for (int r = 0; r<n; r++) {

            while (mpp.find(nums[r]) != mpp.end()) {
                sum -= nums[l];
                mpp.erase(nums[l]);
                l++;
            }

            mpp[nums[r]]++;
            sum += nums[r];
            maxSum = max(maxSum , sum);
        }

        return maxSum;

    }
};