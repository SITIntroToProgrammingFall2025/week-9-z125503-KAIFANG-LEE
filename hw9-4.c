#include <stdio.h>
#include <math.h>
int main() {

int rgb[3], i;
char hex[7];
int R, G, B, r1, g1, b1;
int r2, g2, b2;
char hex2[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
scanf("%d %d %d", &R, &G, &B);

r1 = R/16;
g1= G/16;
b1=B/16;

r2=(R%16);
g2=(G%16);
b2=(B%16);

hex[0]='#';
hex[1]=hex2[r1];
hex[2]=hex2[r2];
hex[3]=hex2[g1];
hex[4]=hex2[g2];
hex[5]=hex2[b1];
hex[6]=hex2[b2];

printf("The hex code is");
for(i=0; i<7; i++)
		{
			printf(" %c", hex[i]);
		}
return 0;
}


