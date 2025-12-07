#include<stdio.h>
int main()
{
	int a[2][3], c[2][2];
	int  b[3][2];
	int i, j;
	for(i = 0; i < 2; i++)
		{
			for(j=0; j<3; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
	for(i = 0; i < 3; i++)
		{
			for(j=0; j<2; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}
	c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
	c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
	c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
	c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
	for ( i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ", c[i][j]);
		}
	printf("\n");
	}

return 0;
}


