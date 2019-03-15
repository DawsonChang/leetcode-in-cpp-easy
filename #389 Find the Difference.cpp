class Solution {
public:
    struct myclass {
        bool operator() (int i,int j) { return (i<j);}
    } myobject;
    
    char findTheDifference(string s, string t) {
        vector<char> m1;
        vector<char> m2;
        for (int i = 0; i < s.length(); i++) {
            m1.push_back(s[i]);
        }
        for (int i = 0; i < t.length(); i++) {
            m2.push_back(t[i]);
        }
        sort (m1.begin(), m1.end(), myobject);
        sort (m2.begin(), m2.end(), myobject);
        for (int i = 0; i < s.length(); i++) {
            if(m1[i] != m2[i]) {
                return m2[i];
            }
        }
        return m2[t.length()-1];
    }
};
