//
// Created by Yu4n on 2021-03-25.
//

TreeNode* searchBST(TreeNode* root, int val) {
    while (root != nullptr)
        if (root->val == val)
            return root;
        else if (root->val < val)
            root = root->right;
        else
            root = root->left;
    return nullptr;
}
