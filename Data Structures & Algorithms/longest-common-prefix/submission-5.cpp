struct TrieNode {
  TrieNode *children[26];
  bool isLeaf;

  TrieNode() {
    for (int i = 0; i < 26; i++) {
      children[i] = nullptr;
    }
    isLeaf = false;
  }
};

void insert(TrieNode *root, string word) {
  TrieNode *curr = root;
  for (int i = 0; i < word.size(); i++) {
    if (curr->children[word[i] - 'a'] == nullptr) {
      curr->children[word[i] - 'a'] = new TrieNode();
    }
    curr = curr->children[word[i] - 'a'];
  }
  curr->isLeaf = true;
}

int search_prefix(TrieNode *root) {
  TrieNode *curr = root;
  int len = 0;
  while (true) {
    int ct = 0;
    int index;
    if (curr->isLeaf == true) break;
    for(int i=0; i<26; i++) {
        if (curr->children[i] != nullptr) {
            ct++;
            index = i;
        }
    }
    if (ct == 1) {
        curr = curr->children[index];
    }
    else {
        break;
    }
    len++;
  }
  return len;
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        TrieNode root = TrieNode();
        for (int i = 0; i < strs.size(); i++) { 
            if (strs[i] == "") return "";
              insert(&root, strs[i]);
        }
        return strs[0].substr(0, search_prefix(&root));
    }
};