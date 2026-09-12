class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        for (; i < nums1.size() and j < nums2.size(); i++) {
            if (nums1[i] > nums2[j] || (nums1[i] == 0 and i >= nums1.size() - nums2.size() + j)) {
                int k = nums1.size() - 1;
                while (k > i) {
                    nums1[k] = nums1[k-1];
                    k--;
                }
                nums1[i] = nums2[j]; j++;
            }
        }
        while (i < nums1.size() and j < nums2.size()) {
            nums1[i++] = nums2[j++];
        }
    }
};