#include<stdio.h>
#include<math.h>
int main(){
    char name[20];
    double salary,sell,TOTAL;
    scanf("%s%lf%lf",&name,&salary,&sell);
    TOTAL=salary+(sell*15/100);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}