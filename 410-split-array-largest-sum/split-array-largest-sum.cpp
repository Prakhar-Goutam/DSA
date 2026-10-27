class Solution {
public:

    int func(vector<int> &nums, int mid) {

        int sum = 0;
        int count = 1;

        for (int i = 0; i<nums.size(); i++) {

            if (sum + nums[i] <= mid) {
                sum += nums[i];
            }

            else {
                count++;
                sum = nums[i];
            }
        }

        return count;

    }
    int splitArray(vector<int>& nums, int k) {

        int n = nums.size();

        int sum = 0;
        int maxE = nums[0];

        for (int i = 0; i<n; i++) {

            sum += nums[i];
            maxE = max (nums[i], maxE);
        }

        if (k==1) {
            return sum;
        }

        if (k==n) {
            return maxE;
        }

        int st = maxE;
        int ed = sum;

        while (st<=ed) {

            int mid = st+(ed-st)/2;

            int x = func (nums,mid);

            if (x>k) {
                st = mid+1;
            }
            else {
                ed = mid-1;
            }
        }

        return st;

    }
};