class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();

        if (n==0) {
            return {-1,-1};
        }

        ///// lowerbound

        int lowerbound = n;
        int low = 0;
        int high = n-1;

        while (low<=high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                lowerbound = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

         if (lowerbound == n || nums[lowerbound] != target) {
            return {-1,-1};
        }


        ///// upperbound

        int upperbound = n;
        int st = 0;
        int ed = n-1;

        while (st<= ed) {

            int mid = st + (ed-st)/2;

            if (nums[mid]>target) {

                upperbound = mid;
                ed = mid-1;
            }
            else {
                st = mid+1;
            }
        }

        return{lowerbound, upperbound-1};
        
    }
};