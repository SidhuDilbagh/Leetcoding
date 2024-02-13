class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string strng:words){
            int i=0,j=strng.length()-1;
            while(i<j){
                if(strng[i]!=strng[j]) break;
                i++;
                j--;
            }
            if(i>=j) return strng;
        }
        return "";
    }
};