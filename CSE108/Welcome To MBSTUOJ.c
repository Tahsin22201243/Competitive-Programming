#include <stdio.h>
#include<string.h>
int main() {
     int i,N,j=0;
    char name[15];
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%s", name);
         name[j]=toupper(name[0]);
        printf( "Welcome %s\n", name);
    }

    return 0;
}
