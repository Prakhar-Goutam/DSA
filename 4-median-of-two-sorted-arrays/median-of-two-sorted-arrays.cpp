class Solution {
public:
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {


    int n = nums1.size();
    int m = nums2.size();

    // Always apply binary search on the smaller array
    if (n > m) {
        return findMedianSortedArrays(nums2, nums1);
    }

    int low = 0;
    int high = n;

    while (low <= high) {

        int cut1 = low + (high - low) / 2;
        int cut2 = (n + m + 1) / 2 - cut1;

        int left1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
        int left2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];

        int right1 = (cut1 == n) ? INT_MAX : nums1[cut1];
        int right2 = (cut2 == m) ? INT_MAX : nums2[cut2];

        // Correct partition found
        if (left1 <= right2 && left2 <= right1) {

            // Odd total number of elements
            if ((n + m) % 2 == 1) {
                return max(left1, left2);
            }

            // Even total number of elements
            return (max(left1, left2) +
                    (double)min(right1, right2)) / 2.0;
        }

        // Too many elements taken from nums1
        else if (left1 > right2) {
            high = cut1 - 1;
        }

        // Too few elements taken from nums1
        else {
            low = cut1 + 1;
        }
    }

    return 0.0;
}


};
