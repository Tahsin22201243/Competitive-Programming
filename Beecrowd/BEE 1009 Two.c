#include<stdio.h>
int main()
{
    double a,b;
    char c;
    scanf("%s %lf %lf",&c,&a,&b);
    double salary = a+b*.15;
    printf("TOTAL = R$ %.2lf\n",salary);
    return 0;
}


