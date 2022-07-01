#include <stdio.h>
#define MAX 256

void lermatriz(int m, int n, int M[MAX][MAX]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &M[i][j]);
        }
    }
}

void imp_mat(int m, int n, int M[MAX][MAX]) {
    int i, j ;
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++)
        printf("%d ", M[i][j]) ;
      printf("\n") ;
    }
}

int main () {


    
}