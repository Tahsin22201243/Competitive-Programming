#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    scanf("%lf",&a);
    double v = ((4*3.14159*pow(a,3))/3.0);
    printf("VOLUME = %.3lf\n",v);
    return 0;
}

