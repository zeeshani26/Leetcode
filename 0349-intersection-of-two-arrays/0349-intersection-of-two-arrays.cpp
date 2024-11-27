class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    std::unordered_set<int> hashSet;
    std::unordered_set<int> resultSet;
    int n1 = nums1.size();
    int n2 = nums2.size();

    for (int i = 0; i < n1; i++) {
        hashSet.insert(nums1[i]);
    }
    for (int i = 0; i < n2; i++) {
        if (hashSet.find(nums2[i]) != hashSet.end()) {
            resultSet.insert(nums2[i]);
        }
    }

    std::vector<int> array(resultSet.begin(), resultSet.end());
    return array;
}
}
;