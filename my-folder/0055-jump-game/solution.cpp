class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        bool possible[n];
        for(int i=0;i<n;i++){
            possible[i]=false;
        }
        possible[0]=true;
        for(int i=0;i<n;i++){
            if(possible[i])
            for(int j=min(n-1,i+nums[i]);j>=i;j--){
                if(j==n-1) return true;
                possible[j]=true;
            }

            // for(bool b:possible)cout<<b;
            // cout<<endl;
        }
        return false;
    }
};
