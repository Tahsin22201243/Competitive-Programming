#include<stdio.h>
int main()
{
    int a[] = {2,3,0,1,9,5};
    //int x=700;
    int i=2,b,c;
    b = a[i] + a[i+1];
    c =a[a[i]];

    printf("%d\n",b);
    printf("%d",c);
    return 0;
}
