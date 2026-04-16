class Solution {
public:
    double myPow(double x, int n) {

        long long m = n;

        if (m<0) {
            m = -m;
            x= 1/x;
        }

        double ans = 1;

        while (m>0) {

            if (m%2 == 1) {

                ans*= x;
                m--;
            }

            else {

                m = m/2;
                x = x*x;
            }
        }

        return ans;

        
    }
};