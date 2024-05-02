class Solution {
public:
    string reverseWords(string s) {
        int n=size(s);
        string answer;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                int j=i+1;
                while(j<n && s[j]!=' ') j++;
                if(j==n)
                answer=s.substr(i,j-i+1)+' '+answer;
                else
                answer=s.substr(i,j-i)+' '+answer;
                i=j;
            }
        }
        answer.erase(size(answer)-1);
        return answer;
    }
};
