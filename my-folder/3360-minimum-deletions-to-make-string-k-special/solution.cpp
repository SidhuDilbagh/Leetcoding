class Solution {
public:
    int minimumDeletions(string word, int k) {
        int freq[26]={0};
        for(char c:word){
            freq[c-'a']++;
        }
        sort(freq,freq+26);
        int start=0;
        while(freq[start]==0){
            start++;
        }
        int minSoFar=word.size();
        for(int i=start;i<26;i++){
            int del=0;
            for(int j=start;j<26;j++){
                if(j<i){
                    del+=freq[j];
                } else if(freq[j]-freq[i]>k){
                    del+=freq[j]-freq[i]-k;
                }
            }
            minSoFar=min(minSoFar,del);
        }
        return minSoFar;
    }
};
