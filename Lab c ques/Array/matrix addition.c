#include<stdio.h>
int main()
{
	int a[2][2]={{1,2},{3,4}},b[2][2]={{5,6},{7,8}},i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("element [%d][%d] %d\n",i,j,a[i][j]+b[i][j]);
		}
	}
	return 0;
}
