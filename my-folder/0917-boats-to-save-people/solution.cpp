class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        sort(people.begin(),people.end());

        int n = people.size();
        
        int low = 0, high = n-1;
        int cnt = 0;

        while(low < high)
        {
            int sum = people[low] + people[high];

            if(sum <= limit)
            {
                cnt++;
                low++;
                high--;
            }
            else
            {
                cnt++;
                high--;
            }
        }

        if(low == high)
        {
            cnt++;
        }

        return cnt;
  
    }
};
