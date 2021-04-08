//
// Created by Yu4n on 2021-04-08.
//

TreeNode* build(vector<int>& nums, int p1, int p2) {
    if (p1 > p2) return nullptr;
    int p0 = (p1+p2)/2;
    TreeNode* node = new TreeNode(nums[p0]);
    node->left = build(nums, p1, p0-1);
    node->right = build(nums, p0+1, p2);
    return node;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return build(nums, 0, nums.size()-1);
}