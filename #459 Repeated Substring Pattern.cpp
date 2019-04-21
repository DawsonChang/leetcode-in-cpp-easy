class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length() == 0) return false;
        string temp  = "";
        bool subString = true;
        bool isSub = false;
        for(int i = 0; i < s.length()-1; i++) {
            temp += s[i];
            subString = true;
            if(s.length() % temp.length() != 0) continue;
            else {
                int times = s.length() / temp.length();
                
                for(int j = 1; j < times; j++) {
                    string cur = "";
                    
                    for(int k = 0; k < temp.length(); k++) {
                        cur += s[temp.length()*j+k];
                    }
                    
                    if(temp.compare(cur) != 0) subString = false;
                }
                if(subString == true) isSub = true;
                
            }
        }
        return isSub;
    }
};
