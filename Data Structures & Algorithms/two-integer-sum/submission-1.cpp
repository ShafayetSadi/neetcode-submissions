class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp; // O(n)

        for (int i=0; i<n; i++) {
            mp[nums[i]] = i;
        }
        vector<int> ans;

        for (int i=0; i<n; i++) { // O(n)
            if (mp.contains(target - nums[i])) { // O(1)
                if (i == mp[target-nums[i]]) continue;
                ans.push_back(i); ans.push_back(mp[target-nums[i]]);
                break;
            }
        }

        return ans;
    }
};
