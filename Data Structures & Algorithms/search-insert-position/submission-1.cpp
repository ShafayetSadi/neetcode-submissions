class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
        if (lo < nums.size()  and nums[lo] == target) return lo;
        else if (hi < nums.size() and nums[hi] == target) return hi;
        else return hi + 1;
    }
};