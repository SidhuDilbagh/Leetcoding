class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> out;
        out.push_back(1);
        long int temp=1;
        for(int i=0;i<rowIndex;i++)
        {
            temp=temp*(rowIndex-i)/(i+1);
            out.push_back(temp);
        }
        return out;
    }
};
