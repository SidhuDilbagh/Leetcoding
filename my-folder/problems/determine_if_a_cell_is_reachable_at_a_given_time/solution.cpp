class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) 
    {
        int x=abs(sx-fx),y=abs(sy-fy);
        int min=abs(x-y);
        if(x>y)
            min+=y;
        else
            min+=x;
        if(!min and t==1)
            return false;
        if(min<=t)
            return true;
        else
            return false;
    }
};