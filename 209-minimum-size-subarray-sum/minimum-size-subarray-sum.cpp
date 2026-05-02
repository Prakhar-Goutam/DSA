class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int r = 0;
        int l = 0;
        long long sum = 0;
        int minL = INT_MAX;

        while (r<n) {

            sum += nums[r];

            
            while (sum >= target) {
                minL = min(minL, r-l+1);
                sum -= nums[l];
                l++;
            }

            r++;

        }

        return (minL==INT_MAX) ? 0:minL;
        
    }
};