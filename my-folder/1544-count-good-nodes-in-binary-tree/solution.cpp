class Solution {
    int answer=0;
    void finder(TreeNode *node,int m){
        if(node){
            if(node->val>=m) answer++;
            finder(node->left,max(m,node->val));
            finder(node->right,max(m,node->val));
        }
    }
public:
    int goodNodes(TreeNode* root) {
        finder(root,-100000);
        return answer;
    }
};
