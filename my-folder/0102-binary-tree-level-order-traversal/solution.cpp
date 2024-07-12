class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty()){
            int levelSize=q.size();
            vector<int> current;
            while(levelSize--){
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                current.push_back(q.front()->val);
                q.pop();
            }
            ans.push_back(current);
        }
        return ans;
    }
};
