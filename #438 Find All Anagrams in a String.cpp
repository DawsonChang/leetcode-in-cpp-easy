class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> sv(26,0), pv(26,0), result;
        if(s.size() < p.size()) return result;
        for(int i = 0; i < p.size(); i++) {
            ++sv[s[i] - 'a'];
            ++pv[p[i] - 'a'];
        }
        if(sv == pv){
            result.push_back(0);
        }
        for(int i = p.size(); i < s.size(); i++){
            ++sv[s[i] - 'a'];
            --sv[s[i-p.size()] - 'a'];
            if(sv == pv){
                result.push_back(i-p.size()+1);
            }
        }
        return result;
        
    }
};
