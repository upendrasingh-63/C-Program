#include<stdio.h>
int main()
{
	int a[2][2]={{1,2},{3,4}},i,j,k=3;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("element [%d][%d] %d\n",i,j,k*a[i][j]);
		}
	}
	return 0;
}
