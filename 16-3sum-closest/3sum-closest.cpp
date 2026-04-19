class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();
        int Smallestd = INT_MAX;
        int closestSum = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n-2 ; i++) {


            int j = i+1;
            int k = n-1;

            while (j<k) {

                int sum = nums[i]+nums[j] + nums[k];

                if (sum == target) return sum;

                 int diff = abs(sum - target);

                    if (diff< Smallestd) {
                        Smallestd = diff;
                        closestSum = sum;
                    }

                if (sum < target) {
                    j++;
                }

                else {
                    k--;
                }

            }
        }

        return closestSum;
        
    }
};