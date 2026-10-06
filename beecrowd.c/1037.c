#include<stdio.h>
int main(){
    double n;
    scanf("%lf",&n);
    if(0.00<=n && n<=25.00){
        printf("Intervalo [0,25]\n");
    }
    else if(25.00<n && n<=50.00){
        printf("Intervalo (25,50]\n");
    }
    else if(50.00<n && n<=75.00){
        printf("Intervalo (50,75]\n");
    }
    else if(75.00<n && n<=100.00){
        printf("Intervalo (75,100]\n");
    }
    else if(n<0.00 || n>100.00){
        printf("Fora de intervalo\n");
    }
    return 0;
}
