class Solution {
public:
    string reverseVowels(string s) {
        int n=size(s);
        int i=-1,j=n;
        set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
        while(1){
            do{i++;}while(!vowels.contains(s[i]) && i<n);
            do{j--;}while(!vowels.contains(s[j]) && j>0);
            if(i<j) swap(s[i],s[j]);
            else break;
        }
        return s;
    }
};
