class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int n = arr.size();

        if (k< arr[0]) {
            return k;
        }

        for (int i=0; i<n; i++) {

            if (arr[i] <= k) {
                k++;
            }
            else {
                break;
            }
        }

        return k;
    }
};