class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int n = nums.size();
        int elementSum = 0;
        int digitSum = 0;

        for (int i = 0; i<n; i++) {

            elementSum+= nums[i];

            int num = nums[i];
            int numSum = 0;

            while (num>0) {
                int x = num % 10;
                numSum += x;
                num = num/10;   
            }

            digitSum += numSum;

        }

        return abs(elementSum -digitSum);
    }
};