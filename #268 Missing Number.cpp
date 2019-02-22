class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int maxNum = 0;
        int totalReal = 0;
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxNum)
                maxNum = nums[i];
            totalReal += nums[i];
        }
        total = nums.size()*(nums.size()+1)*0.5;
        return total - totalReal;
    }
};
