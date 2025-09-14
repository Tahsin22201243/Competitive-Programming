#include<stdio.h>

void insertionSort(int arr[], int n)
{
    int i,key ,j;
    for (i = 1; i < n ; i++)
    {
        key = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j =  j - 1;
        }
        arr[j+1] = key;
    }
}

void printArray( int arr[], int n)
{
    int i;
    for ( i = 0; i < n ; i++)
        printf("%d ", arr[i]);

}

int main ()
{
    int x,i,Tst;
    scanf("%d",&Tst);
    while(Tst--)
    {
        scanf("%d",&x);
    int arr[x];
    for(i = 0; i<x; i++)
    {
        scanf("%d",&arr[i]);

    }
            insertionSort(arr, x);
        printArray(arr, x);
         printf("\n");
    }



        return 0;
}
