class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> res;
        for(int i = 1; i <= area; i++){
            if((i >= area/i) && (area/i) * i == area){
                res.push_back(i);
                res.push_back(area/i);
                break;
            }
        }

        return res;
    }
};
