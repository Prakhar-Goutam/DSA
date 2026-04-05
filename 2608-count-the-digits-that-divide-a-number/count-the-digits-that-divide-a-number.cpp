class Solution {
public:
    int countDigits(int num) {

        int count = 0;
        int org = num;

        while (num>0) {
            int x = num%10;
            num = num/10;

            if (org%x==0)count++;
        }

        return count;
        
    }
};