class Solution {
    void inorder(TreeNode *node,vector<int> &check){
        if(node){
            if(node->left) inorder(node->left,check);
            check.push_back(node->val);
            if(node->right) inorder(node->right,check);
        }
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int>check;
        inorder(root,check);
        int p=check[0],n=check.size();
        for(int i=1;i<n;i++){
            if(p>=check[i]) return false;
            p=check[i];
        }
        return true;
    }
};
