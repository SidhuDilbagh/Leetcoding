class Solution {
private:
    int n;
    int m;
    int sze;
    string _word;
    bool check(vector<vector<char>>& board, int w, pair<int, int> pos) {
        if (board[pos.first][pos.second] == _word[w]) {
            char temp = board[pos.first][pos.second];
            board[pos.first][pos.second] = '0';
            w++;
            if (w == sze) return true;
            if (pos.second + 1 < m && check(board, w, make_pair(pos.first, pos.second + 1))) return true;
            else if (pos.first + 1 < n && check(board, w, make_pair(pos.first + 1, pos.second))) return true;
            else if (pos.second - 1 >= 0 && check(board, w, make_pair(pos.first, pos.second - 1))) return true;
            else if (pos.first - 1 >= 0 && check(board, w, make_pair(pos.first - 1, pos.second))) return true;
            board[pos.first][pos.second] = temp;
        }
        return false;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        n = size(board);
        m = size(board[0]);
        sze = size(word);
        _word = word;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0]) {
                    if (check(board, 0, make_pair(i, j)))
                        return true;
                }
            }
        }
        return false;
    }
};
