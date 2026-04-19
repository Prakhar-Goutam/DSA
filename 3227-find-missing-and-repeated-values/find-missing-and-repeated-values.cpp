class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n = grid.size();
        long long N = 1LL * n * n;

        long long gridsum = 0;
        long long gridsqsum = 0;

        for (int i = 0; i<n ; i++) {
            for (int j = 0; j<n; j++) {
                gridsum += grid[i][j];
                gridsqsum +=  1LL *grid[i][j] * grid[i][j];    
            }
        }

        long long sumN = N*(N+1)/2;
        long long sqsumN = N*(N+1)*(2*N+1)/6 ;

        long long diff = gridsum - sumN;
        long long sqdiff = gridsqsum - sqsumN;

        int repeating = (sqdiff/diff + diff)/2;
        int duplicate = (sqdiff/diff - diff)/2;

        return {repeating , duplicate};
    }
};