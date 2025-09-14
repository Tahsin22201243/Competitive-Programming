#include<stdio.h>
int main()
{
    int a=1,T;

    scanf("%d",&T);

    while(a<=T)
    {
        int tk;
        scanf("%d",&tk);
        if(tk%2==0)
            printf("%.0f\n",(tk*((tk/2)+0.5)));
        else
            printf("%d\n",(tk*(tk/2+1)));

        a++;
    }


}

