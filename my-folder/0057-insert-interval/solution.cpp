class Solution {
private:
    bool overlap(vector<int> a, vector<int> b) {
        return (a[0] >= b[0] && a[0] <= b[1] || b[0] >= a[0] && b[0] <= a[1]);
    }

public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,vector<int>& newInterval) {
        int n = size(intervals);
        vector<vector<int>> answer;
        if (!n) {
            answer.push_back(newInterval);
            return answer;
        }
        bool check = false, inserted = false;
        for (int i = 0; i < n; i++) {
            if (!check)
                answer.push_back(intervals[i]);
            if (check) {
                if (answer.back()[1] >= intervals[i][0]) {
                    vector<int> temp = answer.back();
                    answer.pop_back();
                    temp[0] = min(temp[0], intervals[i][0]);
                    temp[1] = max(temp[1], intervals[i][1]);
                    answer.push_back(temp);
                } else {
                    answer.push_back(intervals[i]);
                    check = false;
                }
            }
            if (!inserted && answer.back()[0] > newInterval[1]) {
                answer.pop_back();
                answer.push_back(newInterval);
                answer.push_back(intervals[i]);
                inserted = true;
            } else if (!inserted && overlap(answer.back(), newInterval)) {
                vector<int> temp = answer.back();
                answer.pop_back();
                temp[0] = min(temp[0], newInterval[0]);
                temp[1] = max(temp[1], newInterval[1]);
                answer.push_back(temp);
                check = true;
                inserted = true;
            }
        }
        if (!inserted)
            answer.push_back(newInterval);
        return answer;
    }
};
