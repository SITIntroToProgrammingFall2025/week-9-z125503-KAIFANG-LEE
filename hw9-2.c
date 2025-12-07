#include<stdio.h>
int main()
{
	int a[3][3];
	int  b[3][3];
	int i, j;
	for(i = 0; i < 3; i++)
		{
			for(j=0; j<3; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
	a[0][0] =b[0][2];
	a[0][2] = b[0][0];
	a[1][0] = b[1][2];
	a[1][2] = b[1][0];
	a[2][0] = b[2][2];
	a[2][2] = b[2][0];
printf("You entered\n");
for ( i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", a[i][j]);
		}
	printf("\n");
	}
printf("Output\n");
for ( i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", b[i][j]);
		}
	printf("\n");
	}

return 0;
}
