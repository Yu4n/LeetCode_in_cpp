#include "check&print.cpp"

int depth(TreeNode *root) {
    if(!root){
        return 0;
    }
    return std::max(depth(root->left), depth(root->right)) + 1;
}

int maxDepth(TreeNode *root) {
    if (!root){
        return 0;
    }
    return std::max(depth(root->right), depth(root->left)) + 1;
}

int main() {
}
