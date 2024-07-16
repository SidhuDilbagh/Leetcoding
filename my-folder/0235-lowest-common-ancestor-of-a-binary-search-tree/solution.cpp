class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *ancestor=root;
        while(ancestor){
            if(ancestor->val > p->val && ancestor->val > q->val) ancestor=ancestor->left;
            else if(ancestor->val < p->val && ancestor->val < q->val) ancestor=ancestor->right;
            else return ancestor;
        }
        return NULL;
    }
};
