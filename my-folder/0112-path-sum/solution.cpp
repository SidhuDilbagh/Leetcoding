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
    bool check(TreeNode *node,int n,int targetSum){
        if(!node) return false;
        n+=node->val;
        if(!node->left && !node->right && n==targetSum ) return true;
        return (check(node->left,n,targetSum) || check(node->right,n,targetSum));
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return check(root,0,targetSum);
    }
};
