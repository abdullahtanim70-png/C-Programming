#include<stdio.h>
int main(){
   int Time,speed;
   double fuel=12.00,distance,litter;
   scanf("%d%d",&Time,&speed);
   distance=(double)speed*(double)Time;
   litter=distance/fuel;
   printf("%.3lf\n",litter);
   return 0;
}
