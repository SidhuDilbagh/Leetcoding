class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, int> myMap;
        int n = strs.size();
        for (int i = 0; i < n; i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if (myMap.find(temp) != myMap.end()) {
                ans[myMap[temp]].push_back({strs[i]});
            } else {
                myMap.insert({temp, ans.size()});
                ans.push_back({strs[i]});
            }
        }
        return ans;
    }
};