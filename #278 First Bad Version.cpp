// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        for (int i = 0; i < n; i++) {
            if (isBadVersion(i) == true) {
                return i;
            }
        }
        return n;
    }
};
