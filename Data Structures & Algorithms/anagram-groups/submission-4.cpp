class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        unordered_map<string, vector<string>> mp;
        for (int i=0; i<strs.size(); i++) { // O(n)
            vector<int> temp(26, 0);
            for (int j=0; j<strs[i].size(); j++) { // O(m)
                temp[strs[i][j] - 'a']++;
            }

            string key = to_string(temp[0]);
            for (int j=1; j<26; j++) {
                key += "," + to_string(temp[j]);
            }
            mp[key].push_back(strs[i]);
        }

        for (auto &[key, val] : mp){  // O(n)
            ans.push_back(val);
        }
        return ans;
    }
};
