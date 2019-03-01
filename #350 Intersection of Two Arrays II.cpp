class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for (int i = 0; i < nums1.size(); i++) {
            int j = 0;
            while (j < nums2.size()) {
                if (nums1[i] == nums2[j]) {
                    v.push_back(nums1[i]);
                    nums1[i] = INT_MAX;
                    nums2[j] = INT_MAX;
                    break;
                }
                j++;
            }
        }
        
        return v;
    }
};
