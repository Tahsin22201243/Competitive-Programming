#include<stdio.h>
int main()
{
    int N;
    int A[10][10],i,j,upperSum  =0,lowerSum=0;
    printf("Enter Element:");
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i<j)
            {

                upperSum = upperSum + A[i][j];
            }
            if(i>j)
            {

                lowerSum=lowerSum + A[i][j];
            }



        }
    }
    printf("Upper:%d\n",upperSum );
    printf("Lower:%d\n",lowerSum);
}

