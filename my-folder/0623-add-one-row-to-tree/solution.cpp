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
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode *r=new TreeNode(val,root,NULL);
            return r;
        }
        else if(depth==2){
            root->left=new TreeNode(val,root->left,NULL);
            root->right=new TreeNode(val,NULL,root->right);
        }
        else{
            depth--;
            if(root->left)    root->left=addOneRow(root->left,val,depth);
            if(root->right)    root->right=addOneRow(root->right,val,depth);
        }
        return root;
    }
};
