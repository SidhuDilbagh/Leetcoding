class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root->val==1) return 1;
        else if(root->val==2) return evaluateTree(root->left)|evaluateTree(root->right);
        else if(root->val==3) return evaluateTree(root->left)&evaluateTree(root->right);
        return 0;
    }
};
