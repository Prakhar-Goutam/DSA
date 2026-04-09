class Solution {
public:
    string reverseWords(string s) {

        int st = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i]==' ') {

                int ed = i-1;
                 

                while (st<ed) {
                    swap(s[st], s[ed]);
                    st++;
                    ed--;
                    
                }
                st = i + 1;  
            }

         
        }

        int ed = s.size() - 1;
        while (st < ed) {
        swap(s[st], s[ed]);
        st++;
         ed--;
}

        return s;
        
    }
};