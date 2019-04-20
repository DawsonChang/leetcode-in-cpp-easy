class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> hash(nums.size(), 0);
        vector<int> r;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]-1]++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(hash[i] == 0)
                r.push_back(i+1);
        }
        return r;
    }
};
