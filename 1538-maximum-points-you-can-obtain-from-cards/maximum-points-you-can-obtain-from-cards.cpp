class Solution {
public:
    int maxScore(vector<int>& nums, int k) {

        int n = nums.size();
        int lsum = 0;

        for (int i = 0; i<k ; i++) {
            lsum += nums[i];
        }

        int rsum = 0;
        int maxSum = lsum;
        int l = k-1;
        int r = n-1;

        while (l>=0) {

            lsum = lsum - nums[l];
            rsum = rsum + nums[r];
            
            maxSum = max (lsum + rsum , maxSum);
            l--;
            r--;
        }

        return maxSum;
        

        
    }
};