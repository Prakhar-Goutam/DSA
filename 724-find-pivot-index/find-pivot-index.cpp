class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();
        int arr1[n];
        int arr2[n];

        arr1[0] = 0;
        for (int i = 1; i<n; i++) {
            arr1[i] = arr1[i-1] + nums[i-1];
        }

        arr2[n-1]= 0;
        for (int i = n-2; i>=0; i--) {
            arr2[i] = arr2[i+1] + nums[i+1];
        }

        for (int i = 0; i< n; i++) {

            if (arr1[i]==arr2[i]) {
                return i;
            }
        }

        return -1;
        
    }
};