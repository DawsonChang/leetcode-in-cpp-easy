class Solution {
public:
    bool checkVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
        else return false;
    }
    string reverseVowels(string s) {
        int numVowel = 0;
        for (int i = 0; i < s.size(); i++) {
            if (checkVowel(s[i])) {
                numVowel++;
            }
        }
        int indexFront = -1;
        int indexBack = s.size();
        string result = s;
        for (int i = 0; i < numVowel/2; i++) {
            while (1) {
                indexFront++;
                if (checkVowel(s[indexFront])) {
                    break;    
                }
            }
            while (1) {
                indexBack--;
                if (checkVowel(s[indexBack])) {
                    break;    
                }
            }
            result[indexFront] = s[indexBack];
            result[indexBack] = s[indexFront];
        }
        return result;
    }
};
