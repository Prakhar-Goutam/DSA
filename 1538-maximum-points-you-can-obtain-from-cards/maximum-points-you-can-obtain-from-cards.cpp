class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int lsum = 0;
        for (int i = 0; i < k; i ++){
            lsum += cardPoints[i];
        }
        int Maxsum = lsum;
        int rsum = 0;
        int r = cardPoints.size()-1;

        for (int i = k-1; i>=0; i--){
            lsum = lsum-cardPoints[i];
            rsum = rsum + cardPoints[r];
            r--;
            Maxsum = max(Maxsum , lsum+rsum);

        }
        

       return Maxsum; 
    }
};