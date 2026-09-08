class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int count = 1;
        for (int i=1; i<n; i++) { // O(n)
            if (nums[i] == ans) count++;
            else {
                if (count > 1) count--;
                else {
                    ans = nums[i]; count = 1;
                }
            }
        }
        return ans;
    }
};