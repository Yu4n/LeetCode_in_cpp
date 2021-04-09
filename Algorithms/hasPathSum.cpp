//
// Created by Yu4n on 2021-04-09.
//

bool hasPathSum(TreeNode *root, int targetSum) {
    if (!root) return false;
    if (targetSum - root->val == 0 && !root->left && !root->right) return true;
    return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
}

bool hasPathSumIterative(TreeNode *root, int sum) {
    if (root == NULL) return false;
    stack <pair<TreeNode *, int>> stack;
    stack.push({root, root->val});
    while (!stack.empty()) {
        TreeNode *current = stack.top().first;
        int total_sum = stack.top().second;
        stack.pop();
        if (current->right) stack.push({current->right, total_sum + current->right->val});
        if (current->left) stack.push({current->left, total_sum + current->left->val});
        if (!current->right && !current->left && total_sum == sum) { //if its a leaf
            return true; //and total sum is found
        }
    }
    return false;
}