class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int n = nums.size();
        int tSum = 0;

        for (int i = 0; i<n; i++){
            tSum += nums[i];
        }

        int needSum = tSum - x;

        if (needSum == 0) {
            return n;
        }
         if (needSum < 0) return -1;

        int l = 0;
        int sum = 0;
        int maxL = 0;

        for (int r = 0; r<n; r++) {

            sum += nums[r];

            while (sum > needSum) {
                sum -= nums[l];
                l++;
            }

            if (sum==needSum) {
                maxL = max(maxL, r-l+1);
            }
        }

        if (maxL == 0) {
            return -1;
        }

        else {
            return n- maxL;
        }
        
    }
};