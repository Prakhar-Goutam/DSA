class Solution {
public:
    int search(vector<int>& nums, int target) {

           int n = nums.size();
        
        int st = 0;
        int ed = n-1;
        
        while (st<=ed) {
            
            int mid = st + (ed-st) / 2;
            
            if (nums[mid]==target) {
                return mid;
            }
            
            if (nums[st]<= nums[mid]) {    ///// means left sorted
                
                if (nums[st]<= target && nums[mid]>= target) {
                    ed = mid-1;
                }
                else {
                    st = mid+1;
                }
            }
            
            else {  //// means right sorted ----. nums[mid] <= nums[ed]
                
                
                if (nums[mid] <= target && nums[ed] >= target) {
                    st = mid + 1;
                }
                
                else {
                    ed = mid - 1;
                }
            } 
        }
        
        return -1;
        
    }
};