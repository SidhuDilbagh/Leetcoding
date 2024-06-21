class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int answer=0;
        for(int i=0;i<n;i++){
            if(!grumpy[i]){
                answer+=customers[i];
            }
        }
        int i=0,temp=0;
        while(minutes--){
            if(grumpy[i]){
                temp+=customers[i];
            }
            i++;
        }
        int j=0,count=temp;
        while(i<n){
            if(grumpy[i]){
                temp+=customers[i];
            }
            i++;
            if(grumpy[j]){
                temp-=customers[j];
            }
            count=max(count,temp);
            j++;
        }
        return answer+count;
    }
};
