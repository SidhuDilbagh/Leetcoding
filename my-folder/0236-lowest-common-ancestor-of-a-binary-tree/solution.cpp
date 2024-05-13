class Solution {
    TreeNode *ancestor=NULL;
    bool found(TreeNode *node,TreeNode *p,TreeNode *q){
        bool lft=false,rgt=false,curr=false;
        if(node){
            lft=found(node->left,p,q);
            rgt=found(node->right,p,q);
            curr=(node==p || node==q);
            if((lft && rgt) || (lft && curr) || (rgt && curr)) ancestor=node;
            if(curr) return true;
        }
        return lft||rgt;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        found(root,p,q);
        return ancestor;
    }
};
