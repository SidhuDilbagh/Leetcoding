class Solution {
    int moves;
    int dfs(TreeNode *node){
        if(node){
            int left=dfs(node->left);
            int right=dfs(node->right);
            moves+= abs(left)+abs(right);
            return node->val-1+left+right;
        }
        return 0;
    }
public:
    int distributeCoins(TreeNode* root) {
        moves=0;
        dfs(root);
        return moves;
    }
};
