class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp; // O(n)
        vector<int> ans;

        for (int i=0; i<n; i++) {
            if (mp.contains(target - nums[i])) { // O(1)
                if (i == mp[target-nums[i]]) continue;
                ans.push_back(mp[target-nums[i]]); ans.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }

        return ans;
    }
};
