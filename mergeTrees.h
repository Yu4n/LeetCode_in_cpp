//
// Created by Yu4n on 2021-03-04.
//

#ifndef LEETCODE_IN_CPP_MERGETREES_H
#define LEETCODE_IN_CPP_MERGETREES_H
TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
    if ( t1 && t2 ) {
        TreeNode * root = new TreeNode(t1->val + t2->val);
        root->left = mergeTrees(t1->left, t2->left);
        root->right = mergeTrees(t1->right, t2->right);
        return root;
    } else {
        return t1 ? t1 : t2;
    }
}
#endif //LEETCODE_IN_CPP_MERGETREES_H
