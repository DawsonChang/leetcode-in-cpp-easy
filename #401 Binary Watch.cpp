class Solution {
public:
    int countOneOfBinary(int n) {
        int count = 0;
        while (n > 0) {
            if (n % 2 != 0) count++;
            n = n / 2;
        }
        return count;
    }
    vector<string> readBinaryWatch(int num) {
        vector<string> v;
        string time;
        for (int i = 0; i < 12; i++) {
            int oneInHour = countOneOfBinary(i);
            for (int j = 0; j < 60; j++) {
                int oneInMin = countOneOfBinary(j);
                if (oneInHour + oneInMin != num) {
                    continue;
                }
                else {
                    string h = to_string(i);
                    string m;
                    if (j < 10) {
                        m = "0" + to_string(j);
                    }
                    else {
                        m = to_string(j);
                    }
                    time = h + ":" + m;
                    v.push_back(time);
                }
            }
        }
        return v;
    }
};
