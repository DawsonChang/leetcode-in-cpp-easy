class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int count = 0;
        for(int i = 0; i < points.size(); i++){
            unordered_map<long, int> group(points.size());
            for(int j = 0; j < points.size(); j++){
                if(i == j){
                    continue;
                }
                else{
                    int dist = pow(points[j].first-points[i].first, 2)+pow(points[j].second-points[i].second, 2);
                    group[dist]++;
                    }
            }
            for(auto& p : group){
                if(p.second > 1){
                    count += p.second * (p.second-1);
                }
            }
        }
        return count;
        
    }
};
