class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> v;
        string temp = "";
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != ' ') {
                temp += str[i];
            }
            else {
                v.push_back(temp);
                temp = "";
            }
        }
        v.push_back(temp);
        if (pattern.length() != v.size())
            return false;
        vector<string> table(26, "");
        for (int i = 0; i < pattern.length(); i++) {
            if (table[pattern[i]-97] == "") {
                table[pattern[i]-97] = v[i];
            }
            else {
                if (table[pattern[i]-97] != v[i]) {
                    return false;
                }
            }
                
        }
        //***************************
        //check the situation only have one same char (like "a", "apple")("aaa", "ab ab ab")
        //***************************
        char c = pattern[0];
        bool is_same = true;
        for (int i = 1; i < pattern.length(); i++) {
            if (pattern[i] != c) {
                is_same = false;
            }
        }
        if (is_same == true)
            return true;
        //check the situation that different pattern have the same str
        if ( equal(v.begin() + 1, v.end(), v.begin()) ) {
            return false;
        }
        
        return true;
    }
};
