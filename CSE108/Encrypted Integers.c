#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        int k;
        if(a%2==0)
        {
            k = a/2;
        }
        else
            k = (a*3)+1;
        if(k==b)
        {
            printf("Yes\n");
        }

        else
        {
            printf("No\n");
        }
    }
    return 0;

}
