class Solution 
{
public:
    int candy(vector<int>& ratings) 
    {
        int n=size(ratings);
        int count=1;
        int a[n];
        a[0]=1;
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                a[i]=a[i-1]+1;
                count+=a[i];
            }
            else if(ratings[i]<ratings[i-1] && a[i-1]==1)
            {
                int mem=1;
                a[i]=1;
                int j=i-1;
                while(j>-1 && a[j]==a[j+1])
                {
                    if(ratings[j]==ratings[j+1])
                    break;
                    a[j]=mem+1;
                    j--;
                    mem++;
                }
                count+=mem;
            }
            else
            {
                a[i]=1;
                count+=1;
            }
        }
        return count;
    }
};
