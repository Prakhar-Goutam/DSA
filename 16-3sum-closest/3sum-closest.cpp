class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();
        int Smallestd = INT_MAX;
        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i< n-2; i++) {

            for (int j = i+1 ; j< n-1; j++) {

                for (int k = j+1; k<n ; k++) {

                    int sum = nums[i] + nums[j] + nums[k];

                    int diff = abs(target -  sum);

                    if (sum == target) return target;

                    if (diff < Smallestd) {
                        Smallestd = diff;
                        closestSum = sum;
                    }
                    
                } 
            }
        }

        return closestSum;

        
        
    }
};