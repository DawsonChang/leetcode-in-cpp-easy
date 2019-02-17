class Solution {
public:
    bool isPalindrome(string s) {
        string newS;
        int index = 0;
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i]) || isalpha(s[i])) {
                newS += tolower(s[i]);
                index++;
            }
        }
         for (int i = 0; i < newS.length()/2; i++) {
            if (newS[i] != newS[newS.length()-i-1])
                return false;
         }
        return true;
    }
};
