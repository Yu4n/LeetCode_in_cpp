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
//    TreeNode* invertTree(TreeNode* root) {
//        // The following is basically equivalent to:
//        // if (!root) return root;
//        // TreeNode* temp = invertTree(root->left);
//        // root->left = invertTree(root->right);
//        // root->right = temp;
//        // return root;
//        TreeNode* temp;
//        return root ? (temp = invertTree(root->left), root->left = invertTree(root->right), root->right = temp, root) : root;
//    }
}