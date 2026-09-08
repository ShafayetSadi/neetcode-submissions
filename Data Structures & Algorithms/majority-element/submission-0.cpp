class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp; // Space => O(n)
        for (int i=0; i<n; i++) { // O(n)
            mp[nums[i]]++;
            if (mp[nums[i]] > n/2) return nums[i];
        }
        return 0;
    }
};