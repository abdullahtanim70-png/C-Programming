#include<stdio.h>
int main(){
int N,X,a=0,b=0;
scanf("%d",&N);
for(int i=1;i<=N;i++){
    scanf("%d",&X);
    if(10<=X && X<=20){
        a++;
    }
    else{
        b++;
    }
}
printf("%d in\n",a);
printf("%d out\n",b);
return 0;
}

