class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> answer;
        for(int x:asteroids){
            bool flag=false;
            if(!answer.size() || x>0) answer.push_back(x);
            else if(x<0){
                while(answer.size() && answer.back()>0){
                    if(answer.back()>-x) break;
                    else if(answer.back()==-x) {
                        answer.pop_back();
                        flag=true;
                        break;
                    }
                    else answer.pop_back();
                }
                if((!answer.size() || answer.back()<0)&& !flag) answer.push_back(x);
            }
        }
        return answer;
    }
};
