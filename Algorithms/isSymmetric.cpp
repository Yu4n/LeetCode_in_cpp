//
// Created by Yu4n on 2021-03-27.
//

bool isMirror(TreeNode *t1, TreeNode *t2){
    if (t1 == nullptr && t2 == nullptr) return true;
    if (t1 == nullptr || t2 == nullptr) return false;
    return (t1->val == t2->val)
           && isMirror(t1->right, t2->left)
           && isMirror(t1->left, t2->right);
}
bool isSymmetric(TreeNode* root) {
    return isMirror(root, root);
}

bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    TreeNode *left, *right;
    std::queue<TreeNode *> q;
    q.push(root->left);
    q.push(root->right);
    while (!q.empty()){
        left = q.front();
        q.pop();
        right = q.front();
        q.pop();
        if (left == nullptr && right == nullptr)
            continue;
        if (left == nullptr || right == nullptr || left->val != right ->val)
            return false;
        q.push(left->left);
        q.push(right->right);
        q.push(left->right);
        q.push(right->left);
    }
    return true;
}