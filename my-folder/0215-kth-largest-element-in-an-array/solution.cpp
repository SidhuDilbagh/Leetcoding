class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;
        for(int x:nums){
            p.push(x);
        }
        while(--k){
            p.pop();
        }
        return p.top();
    }
};
