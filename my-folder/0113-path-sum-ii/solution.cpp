class Solution {
    vector<vector<int>> output;
    int targetSum;
    void check(TreeNode* node, int n) {
        static vector<int> answer;
        if (node) {
            n += node->val;
            answer.push_back(node->val);
            check(node->left, n);
            check(node->right, n);
            if (!node->left && !node->right && n == targetSum)
                output.push_back(answer);
            answer.pop_back();
        }
    }

public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        Solution::targetSum = targetSum;
        check(root, 0);
        return output;
    }
};
