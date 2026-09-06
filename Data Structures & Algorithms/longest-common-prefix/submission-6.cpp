class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
};

class Trie {
public:
    TrieNode *root;
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode *curr = root;
            for (char c : word) {
                if (curr->children.find(c) == curr->children.end()) {
                    curr->children[c] = new TrieNode();
                }
                curr = curr->children[c];
        }
    }
    
    int lcp(string word, int prefixLen) {
        TrieNode *curr = root;
        int i = 0;
        while (i < min((int)word.size(), prefixLen)) {
            if (curr->children.find(word[i]) == curr->children.end()){
                return i;
            }
            curr = curr->children[word[i]];
            i++;
        }
        return min((int)word.size(), prefixLen);
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];
        int minIndex = 0;
        for (int i=0; i<strs.size(); i++) {
            if (strs[minIndex].size() > strs[i].size()) {
                minIndex = i;
            }
        }

        Trie trie;
        trie.insert(strs[minIndex]);
        int prefixLen = strs[minIndex].length();

        for (int i = 0; i < strs.size(); i++) { 
            prefixLen = trie.lcp(strs[i], prefixLen);
        }

        return strs[0].substr(0, prefixLen);
    }
};