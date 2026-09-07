class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size()-1;
        while (i < j) {
            if (nums[i] == val) {
                while(nums[j] == val and j > i) j--;
                swap(nums[i], nums[j]);
                i++; j--;
            } else {
                i++;
            }
        }
        for (i=0; i<nums.size(); i++) {
            if (nums[i] == val) return i;
        }
        return i;
    }
};