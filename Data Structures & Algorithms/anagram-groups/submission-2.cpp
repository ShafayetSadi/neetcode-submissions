class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        map<vector<int>, vector<string>> mp;
        for (int i=0; i<strs.size(); i++) { // O(n)
            vector<int> temp(26, 0);
            for (int j=0; j<strs[i].size(); j++) { // O(m)
                temp[strs[i][j] - 'a']++;
            }
            if (mp.find(temp) == mp.end()) {
                mp[temp] = {strs[i]};
            } else {
                mp[temp].push_back(strs[i]);
            }
        }

        for (auto &[key, val] : mp){  // O(n)
            ans.push_back(val);
        }
        return ans;
    }
};
