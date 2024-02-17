class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int i;
        for( i=1;i<heights.size();i++){
            if(heights[i]>heights[i-1]){
                bricks-=(heights[i]-heights[i-1]);
                pq.push(heights[i]-heights[i-1]);
                if(bricks<0){
                    bricks+=pq.top();
                    pq.pop();
                    ladders--;
                }
                if(ladders<0) break;
            }
        }
        return i-1;
        
    }
};
