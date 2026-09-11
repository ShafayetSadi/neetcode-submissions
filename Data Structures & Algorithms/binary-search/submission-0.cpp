class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        int mid;
        while (hi - lo > 1) {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) lo = mid;
            else hi = mid;
        }
        if (nums[lo] == target) return lo;
        else if (nums[hi] == target) return hi;
        else return -1;
    }
};