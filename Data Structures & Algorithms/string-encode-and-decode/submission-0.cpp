class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for (auto str : strs) {
            encoded_string += to_string(str.size()) + " " + str;
        }
        return encoded_string;

    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        string temp = "";
        int len;
        for (int i=0; i<s.size(); i++) {
            if (s[i] == ' ') {
                len = stoi(temp);
                temp = "";
                int j = i + 1;
                while (j <= i + len) {
                    temp += s[j++];
                }
                decoded_strs.push_back(temp);
                temp = "";
                i = j - 1;
            } else {
                temp += s[i];
            }
        }
        return decoded_strs;
    }
};
