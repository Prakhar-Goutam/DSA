class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();
        int tsum = 0;

        for (int i = 0; i<n ; i++) {
            tsum+= nums[i];
        }

        int lsum = 0;
        int rsum = 0;

        for (int i = 0; i<n; i++) {



            if (i==0) {
                int rsum1 = tsum - nums[i];
                if (rsum1==lsum) return i;
            }

            else {
                lsum += nums[i-1];
                rsum = tsum-lsum-nums[i];
                if (rsum==lsum) return i;
            }
        }

        return -1;
        
    }
};