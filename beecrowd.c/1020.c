#include<stdio.h>
int main(){
    int A,Y,d,M,D;
    scanf("%d",&A);
    Y=A/365;//year
    d=A%365;
    M=d/30;//Month
    D=d%30;//Day
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",Y,M,D);
    return 0;
}
