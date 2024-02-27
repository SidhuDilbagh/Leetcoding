class Solution {
    int ans=0;
    int dia(TreeNode* tree){
        if(tree==NULL) return 0;
        else{
            int lft=dia(tree->left);
            int rgt=dia(tree->right);
            ans=max(ans,lft+rgt);
            return max(lft,rgt)+1;
        }
        return 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        dia(root);
        return ans;
    }
};
