class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=size(word);
        int i=0,j=0;
        while(word[j]!=ch){
            j++;
            if(j==n) return word;
        }
        while(i<j){
            swap(word[i],word[j]);
            i++;
            j--;
        }
        return word;
    }
};
