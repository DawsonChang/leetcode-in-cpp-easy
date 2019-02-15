class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        vector<int> v(26, 0);
        for (int i = 0; i < s.length(); i++) {
            int index_s = s[i] - 97;
            int index_t = t[i] - 97;
            v[index_s] += 1;
            v[index_t] -= 1;
        }
        for (int i = 0; i < 26; i++) {
            if (v[i] != 0)
                return false;
        }
        return true;
    }
};
