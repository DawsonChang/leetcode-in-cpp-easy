class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> t1;
        set<int> t2;
        set<int> t;
        vector<int> v;
        for (int i = 0; i < nums1.size(); i++) {
            t1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            t2.insert(nums2[i]);
        }
        set_intersection(t1.begin(),t1.end(),t2.begin(),t2.end(),std::inserter(t,t.begin()));
        set<int>::iterator it;
        for (it = t.begin(); it != t.end(); it++) {
            v.push_back(*it);
        }
        return v;
    }
};
