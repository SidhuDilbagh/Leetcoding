class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j;
        int count=0;
        int n=size(s);
        for(j=0;j<k;j++) if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') count++;
        int maximum = count;
        for(i=0;j<n;j++,i++){cout<<i;
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') count++;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') count--;
            maximum=max(maximum,count);
        }
        return maximum;
    }
};
