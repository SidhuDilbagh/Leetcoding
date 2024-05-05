class Solution {
public:
    int compress(vector<char>& chars) {
        int writeHead=0,readHead=0;
        int n=size(chars);
        while(readHead<n){
            int count=1;
            while(readHead<n-1 && chars[readHead]==chars[readHead+1]){
                readHead++;
                count++;
            }
            chars[writeHead++]=chars[readHead];
            readHead++;
            if(count>1){
            string c=to_string(count);
            for(char x:c) chars[writeHead++]=x;}
        }
        return writeHead;
    }
};
