class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();

        int st = 0;
        int ed = n-1;

        int minE = INT_MAX;

        while (st<=ed) {

            int mid = st + (ed - st) / 2;

            if (nums[st] <= nums[mid]) {    ////// LEFT SORTED

            minE = min (minE , nums[st]);
            st = mid+1;

            }

            else {  ///// right sorted hoga

            minE = min (minE , nums[mid]);
            ed = mid-1;
            }
        }

        return minE;

        
        
    }
};