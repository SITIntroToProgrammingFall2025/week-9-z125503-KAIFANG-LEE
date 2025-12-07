#include <stdio.h>
#include <math.h> // fabs

int main()
{
    double a[2][3], b[3][2], c[2][2];
    int i, j;

    // Input matrix A
    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
            scanf("%lf", &a[i][j]);

    // Input matrix B
    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            scanf("%lf", &b[i][j]);

    // Multiply C = A × B
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];
        }
    }

    // Print result
    printf("The multiplication product of matrix A and matrix B:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            // 判斷是否整數
            if (fabs(c[i][j] - (int)c[i][j]) < 1e-6)
                printf("%d", (int)c[i][j]);
            else
                printf("%.1lf", c[i][j]);

            if (j != 1) printf(" "); // 空格
        }
        printf("\n");
    }

    return 0;
}
