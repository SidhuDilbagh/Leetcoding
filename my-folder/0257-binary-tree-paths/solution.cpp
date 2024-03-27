class Solution {
private:
    void findAns(TreeNode* node, string path, vector<string>& ans) {
        if (node) {
            if (!node->left && !node->right) {
                path.append(to_string(node->val));
                ans.push_back(path);
            } else {
                path.append(to_string(node->val) + "->");
                findAns(node->left, path, ans);
                findAns(node->right, path, ans);
            }
        }
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string check = "";
        findAns(root, check, ans);
        return ans;
    }
};
