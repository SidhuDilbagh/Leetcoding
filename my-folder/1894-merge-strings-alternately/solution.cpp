class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer;
        int n=size(word1);
        int m=size(word2);
        int i;
        for(i=0;i<n && i<m;i++){
            answer.push_back(word1[i]);
            answer.push_back(word2[i]);
        }
        while(i<n){
            answer.push_back(word1[i]);
            i++;
        }
        while(i<m){
            answer.push_back(word2[i]);
            i++;
        }
        return answer;
    }
};
