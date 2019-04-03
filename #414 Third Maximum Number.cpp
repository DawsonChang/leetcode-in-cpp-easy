class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int firstIndex = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[firstIndex]) {
                firstIndex = i;
            }
        }
        int result = nums[firstIndex];
        if (nums.size() > 2) {
            nums.erase(remove(nums.begin(), nums.end(), result), nums.end());
            int secondIndex = 0;
            for(int i = 1; i < nums.size(); i++) {
                if(nums[i] > nums[secondIndex]) {
                    secondIndex = i;
                }
            }
            int temp = nums[secondIndex];
            nums.erase(remove(nums.begin(), nums.end(), temp), nums.end());
            if(nums.size() == 0) return result;
            
            int thirdIndex = 0;
            for(int i = 1; i < nums.size(); i++) {
                if(nums[i] > nums[thirdIndex]) {
                    thirdIndex = i;
                }
            }
            return nums[thirdIndex];
        }
        return result;
    }
};
