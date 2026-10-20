class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();
        int st = 0;
        int ed = n-1;
        int smallest = INT_MAX; 

        while (st<=ed) {

            int mid = st + (ed-st)/2;

            //// left sorted

            if (nums[st] <= nums[mid]) {

                if (nums[st] < smallest) {
                    smallest = nums[st];
                }
                st = mid+1;
            }

            //// right sorted 

            else {

                if (nums[mid] < smallest) {
                    smallest = nums[mid];
                }
                ed = mid-1;
            }
        }

        return smallest;
        
    }
};