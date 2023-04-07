#include <stdio.h>

int main()
{
    int n,j,ele,index,f=0;
    scanf("%d",&n);
    int a[n],i;
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    printf("enter ");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(a[i]==ele){
            f=1;
            index=i+1;
            break;
        }
    }
    if(f==1)
    printf("%d",index);


    return 0;
}
