class Solution {
public:

    int sumLessThanEqual(vector<int> & arr, int k) {

        if (k<0) return 0;

        int n = arr.size();
        int l = 0;
        int sum = 0;
        int count = 0;

        for (int r = 0; r<n; r++) {
            sum += arr[r];

            while (sum > k) {
                sum -= arr[l];
                l++;
            }

            count += r-l+1;
        }

        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        return sumLessThanEqual(nums,goal) - sumLessThanEqual(nums , goal-1);
        
    }
};