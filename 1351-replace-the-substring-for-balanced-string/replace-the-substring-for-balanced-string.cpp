class Solution {    ///// USE OF HELPER FUNC /////  4 brr traverse krna hoga bssss /////
public:

    bool isBalanced (unordered_map<char,int>&mpp, int target) {

        if (mpp['Q'] <= target && mpp['W'] <= target && mpp['E'] <= target && mpp['R'] <= target ) {
            return true;
        }
        return false;
    }


    int balancedString(string s) {
        
        unordered_map<char,int> mpp;
        int n = s.size();
        int target = n/4;
        int minL = n;

        for (int i = 0; i<n ; i++) {
            mpp[s[i]]++;
        }

        //// ALREADY BALANCED ////

        if (isBalanced(mpp, target)) {
            return 0;
        }

        int l = 0;


        for (int r = 0; r<n ; r++) {

            ////remove curr char////
            mpp[s[r]]--;

            //// AGAR BALANCED WINDOW MILE TOH USSE FURTHER SHRINK BHI KRTE JANA HAI ////

            while ( l<= r && isBalanced (mpp,target)) {

                 minL = min (r-l+1, minL);

                //// SHRINK WINDOW ////
                mpp[s[l]]++;

                l++;

            }
        }

     return minL;
        
    }
};