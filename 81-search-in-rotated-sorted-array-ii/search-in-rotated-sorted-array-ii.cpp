class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int n = nums.size();
        int st = 0;
        int ed = n-1;

        while (st<=ed) {

            int mid = (st+ed) / 2;

            if (nums[mid] == target) {
                return true;
            }

            if (nums[st]==nums[mid] && nums[mid] == nums[ed]) {
                st++;
                ed--;
                continue;
            }

          

            //// left sorted ////
            
            if (nums[st] <= nums[mid]) {

                if (target >= nums[st] && target <= nums[mid]) ed = mid-1;    //// left sorted part mai key mil gyi
                else {
                    st = mid+1;
                }
            }

            else {   //// right sorted //// - ya toh left sort hoga , ya toh right /////
                 
                if (target >= nums[mid] && target <= nums[ed]) st = mid+1;   //// right mai exist krta hai 
                else {
                    ed = mid - 1;
                }

            }
        }

        return false;
        
    }
};