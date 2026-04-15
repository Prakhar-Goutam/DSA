class Solution {
public:
    string frequencySort(string s) {

        vector<pair<char,int>> vec(123);

       for (char &ch : s) {

        int freq = vec[ch].second;
        vec[ch] = {ch, freq+1};
       }

       auto lamda = [&] (pair<char,int> & P1 , pair<char,int> &P2) {

        return P1.second> P2.second;
       };

       /////NOW SORT

       sort (begin(vec),end(vec),lamda);

       string result = "";

       for (int i = 0; i <123; i++) {

        if (vec[i].second>0) {

            char ch = vec[i].first;
            int freq = vec[i].second;
            string temp = string(freq,ch);
            result+=temp;
        }

       }

       return result;

        
    }
};