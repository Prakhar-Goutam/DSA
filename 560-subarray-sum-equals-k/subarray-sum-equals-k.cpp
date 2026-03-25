class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        int count = 0;

        for (int i =0; i <n; i++){
            int Currsum = 0;

            for (int j= i ; j <n; j++) {
                Currsum = Currsum + nums[j];

                if (Currsum==k){
                    count++;
                }
            }
        }

        return count;
    }
};