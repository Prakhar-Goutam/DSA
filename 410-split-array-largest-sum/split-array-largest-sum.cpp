class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0LL);

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int subarrays = 1;
            long long sum = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (sum + nums[i] > mid) {
                    subarrays++;
                    sum = nums[i];
                } else {
                    sum += nums[i];
                }
            }

            if (subarrays <= k) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};