class Solution {
public:

    int sum (vector<int> & nums , int mid) {

        int n = nums.size();
        int sum = 0;

        for (int i = 0; i<n; i++) {
            sum += (nums[i] + mid - 1) / mid;
        }
        return sum;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {

        int n = nums.size();

        int maxE = INT_MIN;

        for (int i=0; i<n; i++) {
            maxE = max (maxE, nums[i]);
        }

        int st = 1;
        int ed = maxE;
        int ans = 0;

        while (st<=ed) {

            int mid = st + (ed-st)/2;

            int temp = sum (nums,mid);

            if (temp <= threshold) {
                ans = mid;
                ed = mid - 1;
            }

            else {
                st = mid+1;
            }
        }

        return ans;
        
    }
};