//"10000000000000"
//"1000000000000000000000000000000"
//is not correct

class Solution {
public:
    string addStrings(string num1, string num2) {
        bool num1IsZero = false;
        bool num2IsZero = false;
        if(stoi(num1) == 0) num1IsZero = true;
        if(stoi(num2) == 0) num2IsZero = true;
        
        int s1 = num1.size();
        int s2 = num2.size();
        int maxDigit = ((s1 > s2) ? s1 : s2);
        int n = (maxDigit-1) / 18 + 1;
        int index = 0;
        string result = "";
        int carry = 0;
        for(int i = 0; i < n; i++){
            string temp1 = "";
            string temp2 = "";
            int countZero1 = 0;
            int countZero2 = 0;
            int minCountZero = 0;
            unsigned long long n1 = 0;
            unsigned long long n2 = 0;
            for(int j = 0; j < 18; j++){
                if(s1 > index){
                    temp1 = num1[s1-index-1] + temp1;
                }
                if(s2 > index){
                    temp2 = num2[s2-index-1] + temp2;
                }
                index++;
            }
            
            //cout << temp1 << "\n" << temp2 << endl;
            if(!num1IsZero){
                while(temp1.size() != 0){
                    if(*temp1.begin() == '0') {
                        countZero1++;
                        temp1.erase(temp1.begin());
                    }
                    else break;
                }
            }
            if(!num2IsZero){
                while(temp2.size() != 0){
                    if(*temp2.begin() == '0') {
                        countZero2++;
                        temp2.erase(temp2.begin());
                    }
                    else break;
                }
            }
            cout << countZero1 << endl;
            cout << countZero2 << endl;
            if(countZero1 * countZero2 == 0) {
                minCountZero = ((countZero1 > countZero2) ? countZero1 : countZero2);
            }
            else{
                minCountZero = ((countZero1 > countZero2) ? countZero2 : countZero1);
            }
            //stoll only can change upto 2^63 (it doesn't have unsigned type)
            n1 = ((temp1.size() > 0) ? stoll(temp1) : 0);
            n2 = ((temp2.size() > 0) ? stoll(temp2) : 0);
            auto current = to_string(n1+n2+carry);
            if(current.size() > 18){
                carry = 1;
                current.erase(current.begin());
            }
            else{
                carry = 0;
            }
            if(minCountZero > 0) {
                for(int k = 0; k < minCountZero; k++)
                    current = "0" + current;
            }
            result = current + result;
            //cout << result << endl;
        }
        if (carry == 1){
            result = "1" + result;
         }
        
        return result;
    }
};
