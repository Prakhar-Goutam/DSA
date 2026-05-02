class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int n = nums.size();
        int maxL = 0;
        int l = 0;
        int count = 0; ///// COUNT OF ZEROES

        for (int r = 0; r<n; r++) {

            if (nums[r]==0) {
                count++;
            }

            while (count >k) {
                if (nums[l]==0){
                    count--;
                }
                l++;
            }

            maxL = max(maxL , r-l+1);
        }
        return maxL;
        
    }
};