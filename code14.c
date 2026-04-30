#include <stdio.h>

int main() {
    int n;

    // Input size
    scanf("%d", &n);

    int A[n][n];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int isIdentity = 1;

    // Check identity condition
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j) {
                if (A[i][j] != 1) {
                    isIdentity = 0;
                    break;
                }
            } else {
                if (A[i][j] != 0) {
                    isIdentity = 0;
                    break;
                }
            }
        }
        if (isIdentity == 0)
            break;
    }

    // Output
    if (isIdentity)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}
