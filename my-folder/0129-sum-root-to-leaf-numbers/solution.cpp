class Solution {
private:
    int sum = 0;
    void search(TreeNode* node, int num) {
        if (node) {
            num = num * 10 + node->val;
            if (!node->left && !node->right) {
                sum += num;
            } else {
                search(node->left, num);
                search(node->right, num);
            }
        }
    }

public:
    int sumNumbers(TreeNode* root) {
        int num = 0;
        search(root, num);
        return sum;
    }
};
