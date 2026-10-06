#include<stdio.h>
int main(){
   int X;
   double Y,consumption;
   scanf("%d%lf",&X,&Y);
   consumption=(double)X/Y;
   printf("%.3lf km/l\n",consumption);
   return 0;
}
