class Solution {
public:
    bool check(string s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++; j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        bool flag = false;
        while (i < j) {
            if (s[i] != s[j]) {
                flag = true; break;
            }
            i++; j--;
        }

        if (flag) return check(s, i+1, j) or check(s, i, j-1);
        else return true;
    }
};