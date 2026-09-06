class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for (int i = 0; i < strs[0].size(); i++) { // b, a, t => O(n)
            for (int j = 0; j < strs.size(); j++) { // "bat", "bag", "bank","band" => O(m)
                if (i == strs[j].size() or strs[j][i] != strs[0][i]) return res;
            }
            res += strs[0][i]; 
        }
        return res;
    }
};