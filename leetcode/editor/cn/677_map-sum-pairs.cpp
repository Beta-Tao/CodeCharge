#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
struct TrieNode
{
    int val;
    TrieNode *next[26];

    TrieNode()
    {
        val = 0;
        for (int i = 0; i < 26; i++)
        {
            next[i] = nullptr;
        }
    }
};

class MapSum {
public:
    MapSum() {
        root = new TrieNode;
    }
    
    void insert(string key, int val) {
        int delta = val;
        if (string_num.count(key))
        {
            delta -= string_num[key];
        }
        string_num[key] = val;

        TrieNode *node = root;
        for (auto c : key)
        {
            if (node->next[c - 'a'] == nullptr)
                node->next[c - 'a'] = new TrieNode;
            node = node->next[c - 'a'];
            node->val += delta;
        }
    }
    
    int sum(string prefix) {
        TrieNode *node = root;
        for (auto c : prefix)
        {
            if (node->next[c - 'a'] == nullptr)
                return 0;
            node = node->next[c - 'a'];
        }
        return node->val;
    }

private:
    TrieNode *root;
    unordered_map<string, int> string_num;
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
//leetcode submit region end(Prohibit modification and deletion)

int main(int argc, char **argv)
{
    cout << "Code Charge!!" << endl;
    return 0;
}