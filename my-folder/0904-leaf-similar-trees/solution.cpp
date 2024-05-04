class Solution {
    queue<int> q;
    bool explorer(TreeNode *node,int f){
        if(node){
            if(!node->left && !node->right) {
                if(!f) q.push(node->val);
                else{
                    if(q.front() != node->val) return 0;
                    q.pop();
                }
            }
            else{
                return explorer(node->left,f) && explorer(node->right,f);
            }
        }
        return 1;
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        return explorer(root1,0) && explorer(root2,1) && q.empty();
    }
};
