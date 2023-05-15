#include<stdio.h>
int main() {
   int r, a,b,c;
   printf("\nEnter the two numbers : ");
   scanf("%d", &r);
   a = dia(r);
   b = cir(r);
   c = are(r);
   printf("dia : %d",a);
   printf("aircum : %f",b);
   printf("area : %f",b);
   return 0;
}
int dia(int r) {
   int diam;
   diam = 2*r;
   return (diam);
}
float cir(int r) {
   float cirm;
   cirm = 2*3.14*r;
   return (cirm);
}
float are(int r) {
   float area;
   area = 3.14*r*r;
   return (area);
}
