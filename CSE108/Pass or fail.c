#include<stdio.h>
int main()
{
    int A;
    scanf("%d",&A);
    for(int i=0;i<A;i++)
    {
        int k;
        scanf("%d",&k);
        int arr[k];
        for(int a=0;a<k;a++)
        {
            scanf("%d",&arr[a]);

        }
        int count =0;
        for(int a=0;a<k;a++){

            if(arr[k]>=40){

                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
