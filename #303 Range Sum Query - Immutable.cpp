class NumArray {
public:
    vector<int> result;
    NumArray(vector<int> nums) {
        int k = 0;
        while (k < nums.size()) {
            result.push_back(nums[k]);
            k++;
        }
        /*for(int j = 0; j < nums.size(); j++)
            cout << result[j] << endl;*/
    }
    
    int sumRange(int i, int j) {
        int sum = 0;
        for (int p = i; p <= j; p++){
            sum += result[p];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
