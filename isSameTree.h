//
// Created by Yu4n on 2021-02-20.
//

#ifndef LEETCODE_IN_CPP_ISSAMETREE_H
#define LEETCODE_IN_CPP_ISSAMETREE_H
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr)
            return true;
        if(p == nullptr || q == nullptr)
            return false;
        if(p->val != q->val)
            return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//    if(p->val == q->val) {
//        isSameTree(p->left, q->left);
//        isSameTree(p->right, q->right);
//    } else{
//        return false;
//    }
//    return true;
    }
};
#endif //LEETCODE_IN_CPP_ISSAMETREE_H
