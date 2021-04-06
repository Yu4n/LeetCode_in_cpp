//
// Created by Yu4n on 2021-04-01.
//

int diameter = 0;
int longestPath(TreeNode *node){
    if(node == nullptr) return 0;
    // recursively find the longest path in
    // both left child and right child
    int leftPath = longestPath(node->left);
    int rightPath = longestPath(node->right);

    // update the diameter if left_path plus right_path is larger
    diameter = std::max(diameter, leftPath + rightPath);

    // return the longest one between left_path and right_path;
    // remember to add 1 for the path connecting the node and its parent
    return std::max(leftPath, rightPath) + 1;
}
int diameterOfBinaryTree(TreeNode *root) {
    diameter = 0;
    longestPath(root);
    return diameter;
}