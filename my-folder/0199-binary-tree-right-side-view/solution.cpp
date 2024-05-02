class Solution {
    int maxLevel=-1;
    void finder(vector<int> &answer,TreeNode *node, int level){
        if(node){
            if(level>maxLevel) {
                answer.push_back(node->val);
                maxLevel=level;
            }
            finder(answer,node->right,level+1);
            finder(answer,node->left,level+1);
        }
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> answer;
        finder(answer,root,0);
        return answer;        
    }
};
