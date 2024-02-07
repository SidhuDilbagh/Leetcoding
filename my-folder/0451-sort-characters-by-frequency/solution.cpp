class Solution {
public:
    string frequencySort(string s) {
        int count[75];
        for (int i : s) {
            count[i - '0']++;
        }

        vector<pair<int,char>> check;
        for (int i = 0; i < 75; i++) {
            if (count[i]) {
                check.push_back({count[i], i+'0'});
            }
        }

        sort(check.begin(), check.end(), greater<pair<int, char>>());

        string ans = "";
        int size = check.size();
        for (auto i:check) {
            int temp = i.first;
            while (temp--) {
                ans += char(i.second);
            }
        }

        return ans;
    }
};
