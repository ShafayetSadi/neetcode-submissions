class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> new_strs = strs;
        for (int i=0; i<new_strs.size(); i++) { // O(n)
            sort(new_strs[i].begin(), new_strs[i].end()); // O(m log m)
        }

        map<string, vector<int>> mp;
        for (int i=0; i<new_strs.size(); i++) { // O(n)
            if (mp.find(new_strs[i]) == mp.end()) {
                mp[new_strs[i]] = {i};
            } else {
                mp[new_strs[i]].push_back(i);
            }
        }

        for (auto &[key, val] : mp){  // O(n)
            vector<string> temp;
            for (int i=0; i<val.size(); i++)  { // O(n)
                temp.push_back(strs[val[i]]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
