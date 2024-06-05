class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        char check[26]={0};
        for(char x:words[0]){
            check[x-'a']++;
        }
        for(string s:words){
            char count[26]={0};
            for(char x:s){
                count[x-'a']++;
            }
            for(int i=0;i<26;i++){
                check[i]=min(check[i],count[i]);
            }
        }
        vector<string> answer;
        for(int i=0;i<26;i++){
            string temp(1,'a'+i);
            while(check[i]--){
                answer.push_back(temp);
            }
        }
        return answer;
    }
};
