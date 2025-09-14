#include<stdio.h>
int main()
{
    int r,n,sum=0;

  scanf("%d",&n);
  if (n==0)
  {
       printf("0");
  }
    while(n>0)
    {
        r =n%10;
        r=(r*n/10);
    }
    printf("%d\n",r);

    return 0;
}
