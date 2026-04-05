class Solution {
public:
    int totalFruit(vector<int>& arr) { 

        int n = arr.size();
        int l = 0, r=0,Maxl = 0;
        unordered_map<int,int>mpp;

        while(r<n) {
            mpp[arr[r]]++;

            if (mpp.size()>2) {
                mpp[arr[l]]--;

                if (mpp[arr[l]]==0) mpp.erase(arr[l]);
                l++;
            }

            if (mpp.size() <=2) Maxl= max(Maxl,r-l+1);
            r++;
        }

        return Maxl;

        
    }
};