#include<stdio.h>
int main(){
    int N,X;
    scanf("%d",&N);
    printf("%d\n",N);

    for(int i=0;i<N;i++){
    scanf("%d",&X);
    if(X%2==0 && X>0){
        printf("EVEN POSITIVE\n");
    }
    else if(X%2==0 && X<0){
        printf("EVEN NEGATIVE\n");
    }
    else if(X%2!=0 && X>0){
        printf("ODD POSITIVE\n");
    }
    else if(X%2!=0 && X<0){
        printf("ODD NEGATIVE\n");
    }
    else if(X==0){
        printf("NULL\n");
    }
    
}
    
}