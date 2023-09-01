int* countBits(int n, int* returnSize)
{
        n++;
        *returnSize=n;
        int *a=malloc(n*sizeof(int));
        a[0]=0;
        int f=1,j=0;
        for(int i=1;i<n;i++)
        {
            if(i==f)
            {
                f*=2;
                j=0;
            }
            else
                j++;
            a[i]=a[j]+1;
        }
        return a;
}
