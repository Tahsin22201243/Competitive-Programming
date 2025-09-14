#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    printf("NOTAS:\n");
    printf("%f nota(s) de R$ 100.00\n",a/100);
    a=a%100;
    printf("%f nota(s) de R$ 50.00\n",a/50);
    a=a%50;
    printf("%f nota(s) de R$ 20.00\n",a/20);
    a=a%20;
    printf("%f nota(s) de R$ 10.00\n",a/10);
    a=a%10;
    printf("%f nota(s) de R$ 5.00\n",a/5);
    a=a%5;
    printf("%f nota(s) de R$ 2.00\n",a/2);
    a=a%2;
    printf("MOEDAS:\n");
    printf("%f moeda(s) de R$ 1.00\n",a/1);
    float p=a%1;
    printf("%f moeda(s) de R$ 1.00\n",p/.50);
    p=p%.50;
    printf("%f moeda(s) de R$ 1.00\n",p.025);
    p=p%0.25;
    printf("%f moeda(s) de R$ 1.00\n",p/0.10);
    p=p%0.10;
    printf("%f moeda(s) de R$ 1.00\n",p/0.05);
    p=p%0.05;
    printf("%f moeda(s) de R$ 1.00\n",p/0.01);
    return 0;
}

