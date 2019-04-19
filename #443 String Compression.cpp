class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = chars.size()-1, count = 0;
        int digit = 0;
        char current = chars[i];
        while(i >= 0){
            
            if(current == chars[i])
                count++;
            else{
                if(count != 1){
                    int temp = count;
                    while(temp > 0){
                        temp = temp / 10;
                        digit++;
                    }
                    
                    temp = count;
                    cout << count;
                    for (int j = digit; j > 0; j--){
                        chars.insert(chars.begin()+i+2, (temp%10)+'0');
                        temp = temp / 10;
                    }
                    
                    for(int j = 1; j < count; j++){
                        chars.erase(chars.begin()+i+2+digit);
                    }
                }
                digit = 0;
                count = 1;
                current = chars[i];
            }
            i--;
        }
        if(count != 1){
            int temp = count;
            while(temp > 0){
                temp = temp / 10;
                digit++;
            }

            temp = count;
            cout << count;
            for (int j = digit; j > 0; j--){
                chars.insert(chars.begin()+i+2, (temp%10)+'0');
                temp = temp / 10;
            }

            for(int j = 1; j < count; j++){
                chars.erase(chars.begin()+i+2+digit);
            }
        }
        
        return chars.size();
    }
};
