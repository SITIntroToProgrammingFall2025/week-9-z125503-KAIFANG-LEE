#include <stdio.h>
#include <math.h>

int main()
{
    double a[2][3], b[3][2], c[2][2];
    int i, j;

    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
            scanf("%lf", &a[i][j]);

    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            scanf("%lf", &b[i][j]);

    printf("The first matrix you entered is\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
                printf("%d ", (int)a[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
                printf("%d ", (int)b[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];

    printf("The multiplication product of matrix A and matrix B:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if (fabs(c[i][j] - (int)c[i][j]) < 1e-6)
                printf("%d ", (int)c[i][j]);
            else
                printf("%.1lf ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
