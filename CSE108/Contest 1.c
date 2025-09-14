#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int cake;
        scanf("%d",&cake);
        int i;
        for( i=1;i<=100;i++)
        {
            if(cake%i==0)
            {
                printf("%d ",i);

            }
        }
        printf("\n");
    }
}
