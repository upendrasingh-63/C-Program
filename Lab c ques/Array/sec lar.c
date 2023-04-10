#include <stdio.h>
int main() {
   int a[]={2,5,3,1,2};
   int c;
     for(int i=0;i<5;i++)
   {
       for(int j=0;j<i;j++)
       {
       if(a[j]>a[i])
       {
       c=a[j];
       a[j]=a[i];
       a[i]=c;
       }
   }
   }
   printf("Second largest is %d \n",a[3]);
   
    return 0;
}
