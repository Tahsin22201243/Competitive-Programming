#include<stdio.h>
int main()
{
    int T,i,n,p=1,sum=0;
    scanf("%d",&n);
    while(n>=p)
    {
        scanf("%d",&T);
        for(i=1; i<=T; i++)
        {
            sum=i+sum;
        }
        printf("%d\n",sum);
        p++;
        sum=0;
    }

    return 0;
}
