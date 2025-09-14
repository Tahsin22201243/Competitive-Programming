#include<stdio.h>
int main()
{
    int x[5] ={15,6,2,98,1};
    //int x = 500;
    int *p;

    p = &x[0];
    printf("%d\n",*(p+1)- *p);
    printf("%d",--(*p));
    return 0;
}
