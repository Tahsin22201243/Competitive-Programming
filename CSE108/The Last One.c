#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;

        scanf("%d", &N);

        char n[N][2];
        int B[N];


        for (int i = 0; i < N; i++)
            {

            scanf(" %c", &n[i][0]);
        }

        for (int i = 0; i < N; i++)
            {
            scanf("%d", &B[i]);
        }

        int max = -1;


        for (int i = 0; i < N; i++)
            {
            if (B[i] > max) {
                max = B[i];
            }
        }


        for (int i = 0; i < N; i++)
            {
            if (B[i] == max) {
                printf("%c ", n[i][0]);
            }
        }
        printf("\n");
    }

    return 0;
}
