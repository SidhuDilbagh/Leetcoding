class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root){
            TreeNode *t=invertTree(root->left);
            root->left=invertTree(root->right);
            root->right=t;
        }
        return root;     
    }
};
