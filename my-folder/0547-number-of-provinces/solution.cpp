class Solution {
    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int i, const int& n) {
        for (int j = 0; j < n; j++) {
            if (isConnected[i][j] && !visited[j]) {
                visited[j] = true;
                dfs(isConnected, visited, j, n);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        int n = isConnected.size();
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++)
                if (isConnected[i][j] && !visited[j]) {
                    visited[j]=true;
                    dfs(isConnected, visited, j, n);
                    ans++;
                }
        }
        return ans;
    }
};
