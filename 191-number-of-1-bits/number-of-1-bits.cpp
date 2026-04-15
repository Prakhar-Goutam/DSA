class Solution {
public:
    int hammingWeight(int n) {

        int sum = 0;

        while (n>0) {

            int lastd = n & 1;
            sum = sum + lastd;
            n = n >> 1;
        }
        return sum;
    }
};