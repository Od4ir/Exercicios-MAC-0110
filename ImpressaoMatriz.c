#include <stdio.h>

int main() {
    int n, i = 0, j = 0;
    scanf("%d", &n);
    int quad[n][n];

    while(i != n) {
        while(j != n) {
            scanf("%d", &quad[i][j]);
            j++;
        }
        i++;
        j = 0;
    }
    i = 0;

    while(i != n) {
        while(j != n) {
            printf("%d ", quad[i][j]);
            j++;
        }
        printf("\n");
        i++;
        j = 0;
    }
    return 0;
}
