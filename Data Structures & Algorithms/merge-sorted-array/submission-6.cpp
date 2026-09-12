class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = nums1.size() - nums2.size() - 1, j = nums2.size() - 1;
        int k = nums1.size() - 1;
        while (j >= 0) {
            if (i >= 0 and nums1[i] > nums2[j]) nums1[k--] = nums1[i--];
            else nums1[k--] = nums2[j--]; 
        }
    }
};