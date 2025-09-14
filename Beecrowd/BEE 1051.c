#include<stdio.h>
int main()
{
    double a,p;
    scanf("%lf",&a);
    if (a<=2000.00)
        printf("Isento\n");
    else if(a>=2000.01&&a<=3000.00)
    {
        p=((a-2000.00)*0.08);
        printf("R$ %.2f\n",p);
    }
    else if(a>=3000.01&&a<=4500.00)
    {
        p=((a-3000.00)*0.18)+((1000.00)*0.08);
        printf("R$ %.2f\n",p);
    }
    else if(a>=4500.01)
    {
        p=((a-4500.00)*0.28)+((1000.00)*0.08)+((1500.00)*0.18);
        printf("R$ %.2f\n",p);
    }

    return 0;
}
