/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=0,high=n;
        while(1){
            int check=low + (high-low)/2;
            int x=guess(check);
            if(x==1) low=check+1;
            else if(x==-1) high=check-1;
            else return check;
        }
        return -1;
    }
};
