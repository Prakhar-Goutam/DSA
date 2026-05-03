class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double sum = 0;
        int n = nums.size();

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double maxSum = sum;

        int l = 0;
        int r = k - 1;

        while (r < n - 1) {

            sum -= nums[l];
            l++;
            r++;
            sum += nums[r];

            maxSum = max(maxSum, sum);
        }

        return maxSum / k;
    }
};