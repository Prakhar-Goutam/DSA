class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {

        int n = nums.size();

        int maxE = INT_MIN;
        int sum = 0;

        for (int i = 0; i<n; i++) {

            maxE = max (maxE, nums[i]);
            sum += nums[i];

        }

        int st = maxE;
        int ed = sum;

        int ans = sum;

        while (st<=ed) {

            int mid = st + (ed-st) / 2;

            int count = 1;
            int cSum = 0;

            for (int i = 0; i<n ; i++) {

                cSum += nums[i];

                if (cSum > mid) {
                    count++;
                    cSum = nums[i];
                }
            }

            if (count <= days) {
                ed = mid-1;
                ans = mid;
            }

            else {
                st = mid+1;
            }
        }

        return ans;

    }
};