#include<stdio.h>
int main(){
    int N,M,m,H,s;
    scanf("%d",&N);
    M=N/60;
    s=N%60;// second
    H=M/60;//hour
    m=M%60;//minute
    printf("%d:%d:%d\n",H,m,s);
    return 0;
}