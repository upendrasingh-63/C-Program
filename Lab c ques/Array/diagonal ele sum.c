#include<stdio.h>
int main()
{
	int a[2][2]={{1,2},{3,4}},i,j,sum=0;
	for(i=0;i<2;i++)
		sum+=a[i][i];
	printf("%d",sum);
	return 0;
}
