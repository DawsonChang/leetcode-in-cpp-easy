class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length() == 0) return 0;
        if(s.length() == 1) return 1;
        sort(s.begin(), s.end());
        int i = 0;
        int paliNum = 0;
        bool withSingle = false;
        while (i < s.length()-1) {
            if (s[i] == s[i+1]) {
                i += 2;
                paliNum += 2;
            }
            else {
                withSingle = true;
                i++;
            }
                
        }
        
        if(s.length() % 2 == 1)
            withSingle = true;
        return withSingle == true ? ++paliNum : paliNum;
    }
};
