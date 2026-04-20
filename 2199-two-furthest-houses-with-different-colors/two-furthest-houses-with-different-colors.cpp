class Solution {
public:
    int maxDistance(vector<int>& nums) {
        int n = nums.size();
        int Maxl = 0;

        for (int i = 0; i<n ; i++) {

            for (int j = i+1 ; j<n ; j++) {

                if(nums[i] != nums[j]) {
                    Maxl = max(Maxl , j-i);
                }

            }
        }

        return Maxl;
        
    }
};