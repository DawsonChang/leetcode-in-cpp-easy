class Solution {
public:
    bool isPerfectSquare(int num) {
        //if (num == 1) return true;
        vector<long long> v;
        long long p = 1;
        while (p*p <= num) {
            if (num % p == 0) {
                v.push_back(p);
            }
            p++;
        }
        int k = v[v.size()-1];
        if (k * k == num) return true;
        else return false;
    }
};
