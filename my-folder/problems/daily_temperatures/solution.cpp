class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack <int> stk; 
        for(int i=temperatures.size()-1;i>=0;i--){
            if(stk.empty()){
                stk.push(i);
                ans[i] = 0;
            }
            else{
                while(!stk.empty() && temperatures[i]>=temperatures[stk.top()]){
                    stk.pop();
                }
                if(stk.empty()){
                    ans[i] = 0;
                }
                else{
                    ans[i] = stk.top()-i;
                }
                stk.push(i);
            }
            
        }
        return ans;
    }
};