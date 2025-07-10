class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<>> p;
        for(int x:nums){
            p.push(x);
            if(p.size()>k){
                p.pop();
            }
        }
        return p.top();
    }
};
