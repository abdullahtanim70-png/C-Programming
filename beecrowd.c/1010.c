#include<stdio.h>
int main(){

    int pn1,pu1,pn2,pu2;
    double pp1,pp2,TOTAL;
    scanf("%d%d%lf%d%d%lf",&pn1,&pu1,&pp1,&pn2,&pu2,&pp2);
    TOTAL=((double)pu1*pp1)+((double)pu2*pp2);
    printf("VALOR A PAGAR: R$%.2lf\n",TOTAL);
    return 0;
}