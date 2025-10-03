#include<stdio.h>
int main()
{  int j;
    for(int i=1; i<=9; i+=2)
    {
        for(j=7; j>=5; j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }
            j+=2;

    return 0;
}