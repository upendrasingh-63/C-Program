#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],even=0,odd=0,i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		if(a[i]%2==0)
			even++;
		else
			odd++;
	printf("\n");
	int x=even,y=odd;
	int b[x],c[y];
	for(i=0;i<n;i++)
		if(a[i]%2==0)
		{
			b[x-1]=a[i];
			x--;
		}
		else
		{
			c[y-1]=a[i];
			y--;
		}
	printf("even ");
	for(i=0;i<even;i++)
		printf("%d ",b[i]);
	printf("\n");
	printf("odd ");
	for(i=0;i<odd;i++)
		printf("%d ",c[i]);
	return 0;
}
