class Solution {
public:
    int possibleStringCount(string word) {
        int count=1;
        char curr=word[0];
        for(int i=1;i<word.size();i++){
            if(word[i]==curr){
                count++;
            } else {
                curr=word[i];
            }
        }
        return count;
    }
};
