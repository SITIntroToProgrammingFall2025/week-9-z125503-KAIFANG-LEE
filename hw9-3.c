#include<stdio.h>
int main()
{
	double a[2][3], c[2][2];
	double  b[3][2];
	int i, j;
	for(i = 0; i < 2; i++)
		{
			for(j=0; j<3; j++)
			{
				scanf("%lf", &a[i][j]);
			}
		}
	for(i = 0; i < 3; i++)
		{
			for(j=0; j<2; j++)
			{
				scanf("%lf", &b[i][j]);
			}
		}
	for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            c[i][j] =
                a[i][0] * b[0][j] +
                a[i][1] * b[1][j] +
                a[i][2] * b[2][j];
        }
    }
	printf("The multiplication product of matrix A and matrix B:\n");
	for ( i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			if (c[i][j] == (int)c[i][j])
    printf("%d ", (int)c[i][j]);
else
    printf("%.1f ", c[i][j]);

		}
	printf("\n");
	}

return 0;
}






