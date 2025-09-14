#include<stdio.h>
int main()
{
    int a[] = {2,3,6,1,9,5};
    int i = 2,b,c,d;
   b = ++a[i];
    c =a[i++];
    d =a[i];
    printf("%d\n",b);
     printf("%d\n",c);
      printf("%d\n",d);
}

