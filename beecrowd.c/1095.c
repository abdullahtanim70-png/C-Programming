#include<stdio.h>
int main(){
    int i,N;
    for(N=60;N>=0;N=N-5){
        for(i=1;i<=100;i=i+3){
            printf("I = %d J= %d\n",i,N);
            break;
        }
    }
    return 0;
}