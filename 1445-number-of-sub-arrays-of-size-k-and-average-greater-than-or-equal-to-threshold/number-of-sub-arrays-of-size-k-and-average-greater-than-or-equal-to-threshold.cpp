class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {

        int n = nums.size();
        int count = 0;
        float sum  = 0;

        for (int i = 0; i<k ; i++) {
            sum += nums[i];
        }

         if (sum / k >= threshold) {
                count++;
            }

        int l = 0;
        int r = k;

       while (r<n) {

            sum -= nums[l];
            l++;
            sum += nums[r];
            r++;

            if (sum / k >= threshold) count++;
        }

        return count;
        
    }
};