#include<stdio.h>
int main()
{
    char c[100];
    float a,b;
    gets (c);
    scanf("%f %f",&a,&b);
    printf("%s\n",strupr(c));
    float salary = ((b*15)/100)+a;
    printf("TOTAL = R$ %.2f\n",salary);
    return 0;
}

