class Solution {
    vector<string> vec = {"abc", "def",  "ghi", "jkl","mno", "pqrs", "tuv", "wxyz"};
    vector<string> answer;
    void combine(string& digits, int i) {
        static string s;
        if (i == size(digits)) {
            if (size(s))
                answer.push_back(s);
        } else {
            string z = vec[digits[i] - '0'-2];
            for(char x:z){
                s.push_back(x);
                combine(digits,i+1);
                s.pop_back();
            }
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        combine(digits, 0);
        return answer;
    }
};
