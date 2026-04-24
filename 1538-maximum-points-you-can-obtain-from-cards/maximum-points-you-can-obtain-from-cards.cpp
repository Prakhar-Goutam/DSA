class Solution {
public:
    int maxScore(vector<int>& nums, int k) {

        int n = nums.size();
        int lsum = 0;

        for (int i = 0; i<k ; i++)  {
            lsum += nums[i];
        }

        int i = k-1;
        int j = n-1;

        int rsum = 0;
        int Maxs = lsum + rsum;

        while (i>=0) {

            lsum = lsum - nums[i];
            rsum = rsum + nums[j];
            Maxs = max(Maxs , lsum+rsum);
            i--;
            j--;
        }

        return Maxs;
        
    }
};