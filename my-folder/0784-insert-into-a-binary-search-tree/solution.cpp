class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *ptr=root;
        if(!root) return new TreeNode(val);
        while(1){
            if(ptr->val > val){
                if(ptr->left) ptr=ptr->left;
                else{
                    ptr->left=new TreeNode(val);
                    break;
                }
            }
            else if(ptr->val <val){
                if(ptr->right) ptr=ptr->right;
                else{
                    ptr->right=new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};
