class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count = 0;
        int n = nums.size();
        int left = 0; // Marks the start of the current valid block

        for (int right = 0; right < n; ++right) {
            // Check if the current element is out of bounds
            if (nums[right] < minK || nums[right] > maxK) {
                // If it is, the current valid block ends. 
                // Move 'left' past this invalid element to start a new block.
                left = right + 1;
            } else {
                // If it's valid, add the number of valid subarrays ending at 'right'.
                // The length of the current valid segment is (right - left + 1).
                count += (right - left + 1);
            }
        }

        return count;
    }
};