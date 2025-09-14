#include<stdio.h>
int main()
{
    int a,b,result;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&b);
        int Mark = 0;
        while(b--)
        {
            scanf("%d",&result);
            if(result>=40)
            {
                Mark++;
            }
        }
        printf("%d\n",Mark);
    }
    return 0;
}
