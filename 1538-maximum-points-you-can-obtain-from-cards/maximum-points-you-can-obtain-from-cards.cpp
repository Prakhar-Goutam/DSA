class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int sum = 0;
        for (int i = 0; i < k; i ++){
            sum += cardPoints[i];
        }
        int Maxsum = sum;
        int l = k-1;
        int r = cardPoints.size()-1;
        while (l>=0) {
            sum = sum - cardPoints[l] + cardPoints[r];
            l--;
            r--;
            Maxsum = max(Maxsum,sum);
        }

       return Maxsum; 
    }
};