#include<stdio.h>
int main()
{
	int a[2][2];
	int i, j, deter;
	printf("Enter the ellements in the array:");
	for(i = 0; i < 2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("enter the elements in [%d][%d]:", i,j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("the result of your input array:\n");
	for ( i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", a[i][j]);
		}
	printf("\n");
	}
	deter = a[0][0] * a[1][1] - a[0][1]*a[1][0];
	printf("%d", deter);
return 0;
}


