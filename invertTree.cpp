//
// Created by Yu4n on 2021-03-05.
//

TreeNode* invertTree(TreeNode* root) {
    if(!root){
        return nullptr;
    }
    TreeNode *right = invertTree(root->right);
    TreeNode *left = invertTree(root->left);
    root->left = right;
    root->right = left;
    return root;
}