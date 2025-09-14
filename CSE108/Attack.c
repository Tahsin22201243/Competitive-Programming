#include<stdio.h>
int main()
{
    int K,C1,C2,C3,C4;
    scanf("%d",&K);
    while(K--)
    {
        scanf("%d %d %d %d",&C1,&C2,&C3,&C4);

        if(C1==C3||C2==C4||abs(C1-C3)==abs(C2-C4))
        {
            printf("Attack\n");
        }
        else
        {
            printf("Peace\n");
        }

    }
    return 0;
}
