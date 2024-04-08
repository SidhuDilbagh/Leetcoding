class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for (char i : s) {
            if (size(ans) && i == ans.back()) ans.pop_back();
            else ans += i;
        }
        return ans;
    }
};
