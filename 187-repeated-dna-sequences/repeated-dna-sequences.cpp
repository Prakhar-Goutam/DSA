class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        int n = s.size();

        unordered_map<string, int> mpp;
        vector<string> ans;

        string window = "";

        for (int i = 0; i<10; i++) {
            window += s[i];
        }

        mpp[window]++;

        for (int r = 10; r<n; r++) {

            window.erase(0,1);
             window += s[r];

            if (mpp.find(window) != mpp.end()&& mpp[window] <2 ) {
                ans.push_back (window);
            }   


             mpp[window]++;
        }

        return ans;
        
    }
};