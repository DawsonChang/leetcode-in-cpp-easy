class Solution {
public:
    int findComplement(int num) {
        string binary = bitset<32>(num).to_string();
        int i = 0;
        for(i = 0; i < binary.length(); i++){
            if(binary[i] == '0'){
                continue;
            }
            else{
                break;
            }    
        }
        string result = "";
        for(; i < binary.length(); i++){
            if(binary[i] == '0')
                result += "1";
            else if(binary[i] == '1')
                result += "0";
        }
        return stoi(result, nullptr, 2);
    }
};
