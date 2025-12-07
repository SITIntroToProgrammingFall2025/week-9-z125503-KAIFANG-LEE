#include <stdio.h>
#include <math.h> // 用 fabs()

void printValue(double x) {
    if (fabs(x - (int)x) < 1e-6)  // 判斷是否接近整數
        printf("%d", (int)x);
    else
        printf("%.1f", x);        // 有小數 → 印一位
}

int main() {
    double a[2][3], b[3][2], c[2][2];
    int i, j;

    // Input A
    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
            scanf("%lf", &a[i][j]);

    // Input B
    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            scanf("%lf", &b[i][j]);

    // Multiply C = A × B
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            c[i][j] = a[i][0] * b[0][j] +
                      a[i][1] * b[1][j] +
                      a[i][2] * b[2][j];

    printf("The multiplication product of matrix A and matrix B:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printValue(c[i][j]);
            if (j != 1) printf(" ");  // 列內空格
        }
        printf("\n");
    }

    return 0;
}
