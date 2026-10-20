class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int n = nums.size();
        int ans = 1;

        int maxE = INT_MIN;

        for (int i = 0; i<n; i++) {
            maxE = max(maxE, nums[i]);
        }

        int st = 1;
        int ed = maxE;

        while (st<=ed) {

            int mid = st + (ed-st)/2;

            int sum = 0;

            for (int i = 0; i<n; i++) {
                sum += ceil((double) nums[i]/mid);
            }

            if (sum > threshold) {
                st = mid+1;
            }

            else {
                ed = mid-1;
                ans = mid;
            }
        }

        return ans;
        
    }
};