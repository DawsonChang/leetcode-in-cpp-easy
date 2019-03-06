// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long long start = 1;
        if (guess(1) == 0) return 1;
        long long end = n;
        if (guess(n) == 0) return n;
        long long i = (1+n)/2;
        while (guess(i) != 0) {
            if (guess(i) == 1) {
                start = i;
                i = (start+end)/2;
                
            }
            else if (guess(i) == -1) {
                end = i;
                i = (start+end)/2;        
            }
        }
        return i;
    }
};
