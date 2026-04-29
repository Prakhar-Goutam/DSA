class Solution {
public:
    int maximumGap(vector<int>& nums) {      ////TC = O(N)  SC = O(N)

        ///// nums[] = {21,9,25,3,37,43,49,29};

        int n = nums.size();
        int maxDiff = 0;

        if (n<2) return 0;

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for (int i = 0; i<n ; i++) {
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
        }

        // mini = 3, maxi = 49

        if (maxi==mini) return 0; ////// if nums[] = {0,0,0,0,0}

        int bucketSize = ceil ((double) (maxi-mini)/ (n-1));    //// size of bucket = 7
        int bucketCount = ((maxi-mini)/bucketSize) + 1;         //// no.of bucket = 7
        
        ///// NOW DECLARING OUR MAX AND MIN BUCKET

        vector<int> bucketMin (bucketCount , INT_MAX);
        vector<int> bucketMax (bucketCount , INT_MIN);

        //// bucketMin = {&,&,&,&,&,&,&}    & = +infinity
        //// bucketMax = {*,*,*,*,*,*,*}    * = -infinity

        //// NOW FILLING UP THE BUCKET

        for (int i = 0; i<n; i++) {

            int idx = (nums[i] - mini)/ bucketSize;

            bucketMin[idx] = min(bucketMin[idx],nums[i]);
            bucketMax[idx] = max(bucketMax[idx],nums[i]);

        }

        //// bucketMin = {3,__,21,25,37,43,49}
        //// bucketMax = {9,__,21,29,37,43,49}

        //// CALCULATING MAXIMUM GAP

        int maxGap=0;
        int prevMax = mini;

        for (int i =0; i<bucketCount; i++) {

           if (bucketMin[i]==INT_MAX) continue;

            maxGap = max(maxGap, bucketMin[i]- prevMax);
            prevMax = bucketMax[i];
        }

        return maxGap;


    }
};