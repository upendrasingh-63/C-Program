#include<stdio.h>
int main() {
   int num1, res;
   printf("\nEnter the two numbers : ");
   scanf("%d", &num1);
   res = cube(num1);
   printf("cube: %d",res);
   return 0;
}
int cube(int num1) {
   int num2;
   num2 = num1*num1*num1;
   return (num2);
}
