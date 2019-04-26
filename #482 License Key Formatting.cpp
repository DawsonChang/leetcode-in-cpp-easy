class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string result = "";
        int count = 0;

        for(int i = S.length()-1; i >= 0; i--){
            if(S[i] == '-') continue;
            else{
                if(count >= K){
                    result.insert(result.begin(), '-');
                    count = 0;
                }
                
                result.insert(result.begin(), toupper(S[i]));
                count++;
            }
        }
        return result;
    }
};
