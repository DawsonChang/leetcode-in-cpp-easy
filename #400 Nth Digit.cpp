class Solution {
public:
    int findNthDigit(int n) {
        if(n < 10) {
            return n;
        }
        long long i, j;
        int number = 0;
        for(i = 9, j = 1; n > (i)*(j); i *= 10, j++) {
            n = n - i*j;
            number = n;
        }
         i = pow(10,j-1);
        // j++;
        int target, digit;
         // cout << i << " " << j;
        if(number % j == 0) {
            target = i + (number / j) - 1;
            digit = j;
        }
        else {
            target = i + (number / j);
            digit = number % j;
        }
        // cout << target << " " << digit;
        auto s = to_string(target);
        // cout << s;
        return s[digit-1] - '0';
    }
};
