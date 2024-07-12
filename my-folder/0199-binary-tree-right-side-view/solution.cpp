class Solution {
    void generateView(TreeNode *root,vector<int> &ans,int level){
        if(root){
            if(level>ans.size()) ans.push_back(root->val);
            generateView(root->right,ans,level+1);
            generateView(root->left,ans,level+1);
        }
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> answer;
        generateView(root,answer,1);
        return answer;
    }
};
