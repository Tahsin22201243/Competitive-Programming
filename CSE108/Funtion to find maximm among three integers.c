#include<stdio.h>
Maximum_value(int a,int b,int c){
int max= a;
if (b >max)
{
    max = b;
}
if (c >max)
{
    max = c;
}
return max;
}

int main()
{
    int x,y,z;
    printf("Enter the value: ");
    scanf("%d %d %d",&x,&y,&z);
    int maximum = Maximum_value(x,y,z);
    printf("The Maximum Number is: %d\n",maximum);
    return 0;
}
