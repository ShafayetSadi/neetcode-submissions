class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> new_strs = strs;
        for (int i=0; i<new_strs.size(); i++) {
            sort(new_strs[i].begin(), new_strs[i].end());
        }

        map<string, vector<int>> mp;
        for (int i=0; i<new_strs.size(); i++) {
            if (mp.find(new_strs[i]) == mp.end()) {
                mp[new_strs[i]] = {i};
            } else {
                mp[new_strs[i]].push_back(i);
            }
        }

        for (auto &[key, val] : mp){
            vector<string> temp;
            for (int i=0; i<val.size(); i++)  {
                temp.push_back(strs[val[i]]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
