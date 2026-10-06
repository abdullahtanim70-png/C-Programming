#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
if(c>a && b>d){
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a-1,60-b+d);
}
else if(c>a && b==d){
    printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",c-a);
}
else if(c>a && d>b){
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,d-b);
}
else if(a>c && b>d){
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+c-1,60-b+d);
}
else if(a>c && b==d){
    printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",24-a+c);
}
else if(a>c && d>b){
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+c,d-a);
}
else if(a==c && b==d){
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
}
else if(a==c && b<d){
    printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",d-b);
}
else if(a==c && b>d){
    printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",60-b+d);
}
}
