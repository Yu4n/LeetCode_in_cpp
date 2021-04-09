//
// Created by Yu4n on 2021-04-09.
//

int depth(TreeNode *root) {
    if (!root) return 0;
    return std::max(depth(root->left), depth(root->right)) + 1;
}

bool isBalanced(TreeNode *root) {
    if (!root) {
        return true;
    }
    int left = depth(root->left);
    int right = depth(root->right);
    return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

class Solution {
public:
    bool isBalanced(TreeNode *root) {
        if (!root) return true;
        TreeNode *cur = root;
        TreeNode *prev = nullptr;
        while (cur || !s.empty()) {
            if (cur) {
                s.push(cur);
                cur = cur->left;
            } else {
                cur = s.top();

                if (!cur->right || prev == cur->right) {
                    int left = (m.find(cur->left) != m.end()) ? m[cur->left] : 0;
                    int right = (m.find(cur->right) != m.end()) ? m[cur->right] : 0;
                    if (abs(left - right) > 1) return false;
                    m[cur] = 1 + max(left, right);
                    prev = cur;
                    cur = nullptr;
                    s.pop();
                } else {
                    cur = cur->right;
                }
            }
        }
        return true;
    }

private:
    stack<TreeNode *> s;
    unordered_map<TreeNode *, int> m;
};