class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        vector<int> ans ;

        int i = 0;
        int j = 0;

        while (i<m && j<n) {

            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while (i<m) {
            ans.push_back(nums1[i]);
            i++;
        }

        while (j<n) {
            ans.push_back (nums2[j]);
            j++;
        }

        int size = ans.size();

        if (size % 2 == 1) {
            return (double) ans[size/2];
            j++;
        }

        else {

            return (double) ((ans[(size-1)/2] + ans[(size/2)]) / 2.0);
        }    
    }
};