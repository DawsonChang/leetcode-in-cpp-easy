class Solution {
public:
    int countSegments(string s) {
        if(s.size() == 0) return 0;
        bool realString = false;
        if(s[0] != ' ') realString = true;
        int count = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == ' ' && s[i-1] != ' ' )
                count++;
            if(s[i] != ' ')
                realString = true;
        }
        if(realString && s[s.size()-1] != ' ') return ++count;
        else return count;
    }
};
