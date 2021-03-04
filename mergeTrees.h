//
// Created by Yu4n on 2021-03-04.
//

#ifndef LEETCODE_IN_CPP_MERGETREES_H
#define LEETCODE_IN_CPP_MERGETREES_H
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    if(!root1){
        return root2;
    }
    if (!root2){
        return root1;
    }
    root1->val += root2->val;
    root1->left = mergeTrees(root1->left,root2->left);
    root1->right = mergeTrees(root1->right, root2->right);
    return root1;
}
#endif //LEETCODE_IN_CPP_MERGETREES_H
