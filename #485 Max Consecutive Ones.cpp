class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentNum = 0;
        int maxNum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                currentNum++;
            }
            else{
                maxNum = (currentNum > maxNum) ? currentNum : maxNum;
                currentNum = 0;
            }
        }
        maxNum = (currentNum > maxNum) ? currentNum : maxNum;
        return maxNum;
    }
};
