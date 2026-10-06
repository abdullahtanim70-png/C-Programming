#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    for(i=2;i<=10000;i+=13){
        printf("%d\n",i);
    }
    return 0;
}