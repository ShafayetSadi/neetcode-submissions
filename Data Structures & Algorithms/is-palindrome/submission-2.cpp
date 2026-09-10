class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            while((i < j) and (s[i] == ' ' or !isalnum(s[i]))) i++;
            while ((i < j)and (s[j] == ' ' or !isalnum(s[j]))) j--;
            if ((i < j) and tolower(s[i++]) != tolower(s[j--])) {
                cout << s[i-1] << " " << s[j+1] << endl;
                return false;
            }
        }
        return true;
    }
};
