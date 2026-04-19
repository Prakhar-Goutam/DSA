class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        vector<int> nums;
        int n = grid.size();
        
        int duplicate = -1;
        int missing = -1;

        for (int i = 0; i <n ; i++) {
            for (int j = 0; j<n ; j++) {
                nums.push_back(grid[i][j]);
            }
        }


            for (int i = 0; i<nums.size() ; i++) {

                int idx = abs(nums[i]) - 1;


                if (nums[idx] < 0) {

                    duplicate = abs (nums[i]);

                }

                else {

                    nums[idx] = -nums[idx];
                }
            }

            for (int i = 0; i<nums.size () ; i++) {

                if (nums[i] > 0) {

                    missing = i+1;
                    break;
                }
            }

            return {duplicate, missing}; 
        
    }
};