int lengthOfLongestSubstring(char * s)
{
    int arr[96];
    int max=0;
    int count=0;
    int clash=-1;
    int n=strlen(s);
    for(int i=0;i<96;i++)
    arr[i]=-1;

    for(int i=0;i<n;i++)
    {

        if(arr[s[i]-32]==-1 )
        {
            arr[s[i]-32]=i;
            count++;
        }

        else
        {
            if(clash<arr[s[i]-32])
            clash=arr[s[i]-32];
            arr[s[i]-32]=i;
            count=i-clash; 
        }

        if(max<count)
        max=count;
    }
    return max;
}
