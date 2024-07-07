class Solution {
public:
    string getEncryptedString(string s, int k) {
        string answer="";
        int n=s.size();
        for(int i=0;i<n;i++){
            answer.push_back(s[(i+k)%n]);
        }
        return answer;
    }
};
