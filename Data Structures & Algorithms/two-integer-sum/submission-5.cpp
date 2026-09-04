class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> vp;

        for (int i=0; i<n; i++) {
            vp.push_back({nums[i], i});
        }
        sort(vp.begin(), vp.end());

        int i = 0, j = n - 1;
        while(i < j) {
            int curr = vp[i].first + vp[j].first;
            if (curr == target) {
                return {min(vp[i].second, vp[j].second), max(vp[i].second, vp[j].second)};
            }
            else if (curr < target) i++;
            else j--;
        }
        return {};
    }
};
