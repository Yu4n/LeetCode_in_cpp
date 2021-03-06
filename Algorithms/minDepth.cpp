//
// Created by Yu4n on 2021-04-09.
//

int minDepth(TreeNode *root) {
    if (root == NULL) return 0;
    queue < TreeNode * > Q;
    Q.push(root);
    int i = 0;
    while (!Q.empty()) {
        i++;
        int k = Q.size();
        for (int j = 0; j < k; j++) {
            TreeNode *rt = Q.front();
            if (rt->left == NULL && rt->right == NULL) return i;
            if (rt->left) Q.push(rt->left);
            if (rt->right) Q.push(rt->right);
            Q.pop();
        }
    }
    return 0;
}

int minDepthRecursion(TreeNode *root) {
    if (!root) return 0;
    if (!root->left) return minDepth(root->right) + 1; // only right subtree
    else if (!root->right) return minDepth(root->left) + 1; // only left subtree
    else return min(minDepth(root->left), minDepth(root->right)) + 1;
}