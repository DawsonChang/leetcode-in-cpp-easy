class Solution {
public:
    int arrangeCoins(int n) {
        long long int i = 1, count = 0;
        while(count <= n){
            count += i;
            i++;
        }
        return i-2;
    }
};
