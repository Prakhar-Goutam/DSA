class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        int n = nums.size();
        set<int>st;

        int i = 0;
        int j = 0;

        while(j<n) {

            // step 1
            while (abs(j-i) > k) {   //// abs(j-i) <=k na hp
                
                st.erase(nums[i]);
                i++; ///// shrink
            }

            //// past mai dekha hai nums[j] ko
            if (st.find(nums[j]) != st.end()) {
                return true;
            }

            st.insert(nums[j]);
            j++;


        }

        return false;
        
    }
};