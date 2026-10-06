#include<stdio.h>
int main(){
int a,b,c;
scanf("%d%d",&a,&b);
c=24-a;
if(a>b){
    printf("O JOGO DUROU %d HORA(S)\n",c+b);
}
else if(b>a){
    printf("O JOGO DUROU %d HORA(S)\n",b-a);
}
else if(a==b){
    printf("O JOGO DUROU 24 HORA(S)\n");
}
}
