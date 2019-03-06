class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m;
        for (int i = 0; i < ransomNote.length(); i++) {
            char c = ransomNote.at(i);
            if (m.find(c) != m.end()) {
                (m[c])++;
            }
            else {
                m[c] = 1;
            }
        }
        for (int i = 0; i < magazine.length(); i++) {
            if (m.find(magazine[i]) != m.end()) {
                (m[magazine[i]])--;
            }   
        }
        map<char, int>::iterator iter;
        for (iter = m.begin(); iter != m.end(); iter++) {
            if (iter -> second > 0) {
                return false;
            }
        }
        return true;
    }
};
