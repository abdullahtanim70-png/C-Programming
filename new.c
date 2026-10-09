#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(abs(a-b)<=1 && abs(b-c)<=1 && abs(c-d)<=1 && abs(d-e)<=1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}