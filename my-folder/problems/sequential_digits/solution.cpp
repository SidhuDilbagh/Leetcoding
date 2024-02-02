class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        int n = 123456789;
        for (int i = 2; i < 10; i++) {
            for (int j = 10 - i - 1; j >= 0; j--) {
                int num = n / pow(10, j);
                num = num % int(pow(10, i));
                if (num >= low && num <= high) {
                    ans.push_back(num);
                } else if (num > high) {
                    return ans;
                }
            }
        }
        return ans;
    }
};