class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (!(n % groupSize)) {
            sort(hand.begin(), hand.end());
            int groups=n/groupSize;
            int ptr=0;
            while(groups--){
                // cout<<"group"<<groups<<endl;
                int i,count=0,prev=-2;
                bool lock=false;
                for(i=ptr;i<n && count<groupSize;i++){
                    // cout<<"        prev"<<prev<<" count"<<count<<" i"<<i<<endl;
                    if(prev==-2){
                        prev=hand[i];
                        hand[i]=-1;
                        count++;
                    } else if(hand[i]!=-1){
                        if(hand[i]==prev+1){
                            prev=hand[i];
                            hand[i]=-1;
                            count++;
                        }
                        else if(hand[i]>prev+1){
                            return false;
                        }
                        else if(!lock){
                            // cout<<"lock";
                            lock=true;
                            ptr=i;
                        }
                    }
                    // for(int z:hand) cout<<z<<" ";cout<<endl;
                }
                if(count!=groupSize){
                    return false;
                }
                if(!lock){
                    ptr=i;
                }
            }
            return true;
        }
        return false;
    }
};
