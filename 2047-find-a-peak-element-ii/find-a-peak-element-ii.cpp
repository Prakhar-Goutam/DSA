class Solution {
public: 

    int findMaxRow (vector<vector<int>> mat, int m , int n, int col) {

        int maxE = -1;
        int idx = -1;

        for (int i = 0; i<m ; i++) {

            if (mat[i][col] > maxE) {
                maxE = mat[i][col];
                idx = i;
            }
        }

        return idx;

    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();

        int low = 0;
        int high = n-1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int maxRowIdx = findMaxRow (mat, m , n, mid);

            int left = mid - 1>=0 ? mat[maxRowIdx][mid-1] : -1;
            int right = mid + 1< n ? mat[maxRowIdx][mid+1] : -1;

            if (mat[maxRowIdx][mid] > left && mat[maxRowIdx][mid]> right) {
                return {maxRowIdx, mid};
            }

            else if (mat[maxRowIdx][mid]<left) {
                high = mid - 1;
            }

            else {
                low = mid + 1;
            }


        }

        return {-1,-1};
    }
};