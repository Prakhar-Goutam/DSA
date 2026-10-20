class Solution {
public:
    int mySqrt(int x) {

        int st = 1;
        int ed = x;
        int ans = 0;

        if (x==0) {
            return 0;
        }

        while (st <= ed) {

            int mid = st + (ed - st) / 2;

            if ((long long)mid * mid > x) {
                ed = mid - 1;
            }

            else {

                ans = mid;
                st = mid + 1;
            }
        }



        return ans;
        
    }
};