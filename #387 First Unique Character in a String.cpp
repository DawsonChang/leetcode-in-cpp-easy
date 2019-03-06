class Solution {
public:
    int firstUniqChar(string s) {
        bool checkUniq = true;
        for (int i = 0; i < s.length(); i++) {
            checkUniq = true;
            for (int j = 0; j < s.length(); j++) {
                if (i == j) {
                    continue;
                }
                if (s[i] == s[j]) {
                    checkUniq = false;
                    break;
                }
            }
            if (checkUniq == true)
                return i;
        }
        return -1;
    }
};
