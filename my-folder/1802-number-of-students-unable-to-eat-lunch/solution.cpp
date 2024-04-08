class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zeroes=0,ones=0;
        for(int i:students){
            if(i) ones++;
            else zeroes++;
        }
        for(int i:sandwiches){
            if(i==0){
                if(zeroes) zeroes--;
                else return ones+zeroes;
            }
            else{
                if(ones) ones--;
                else return zeroes+ones;
            }
        }
        return 0;
    }
};
