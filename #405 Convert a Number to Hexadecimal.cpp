class Solution {
public:
    char decToHex(int a) {
        if (a < 10)
            return a + '0';
        else if (a == 10)
            return 'a';
        else if (a == 11)
            return 'b';
        else if (a == 12)
            return 'c';
        else if (a == 13)
            return 'd';
        else if (a == 14)
            return 'e';
        else
            return 'f';
    }
    char hexChange(char a) {
        if (a == '0') return 'f';
        else if (a == '1') return 'e';
        else if (a == '2') return 'd';
        else if (a == '3') return 'c';
        else if (a == '4') return 'b';
        else if (a == '5') return 'a';
        else if (a == '6') return '9';
        else if (a == '7') return '8';
        else if (a == '8') return '7';
        else if (a == '9') return '6';
        else if (a == 'a') return '5';
        else if (a == 'b') return '4';
        else if (a == 'c') return '3';
        else if (a == 'd') return '2';
        else if (a == 'e') return '1';
        else return '0';
    }
    string toHex(int num) {
        string s = "";
        char ch;
        bool isNag = false;
        if (num < 0) {
            num = 0 - num - 1;
            isNag = true;
        }
        while(num >= 16) {
            ch = decToHex(num % 16);
            s = ch + s;
            num /= 16;
        }
        s = decToHex(num) + s; 
        if(isNag == true) {
            for(int i = s.length()-1; i >= 0; i--) {
                s[i] = hexChange(s[i]);
            }
            int len = s.length();
            if(len < 8) {
                for (int i = 0; i < 8 - len; i++) {
                    s = 'f' + s;
                }
            }
        }
        return s;
    }
};
