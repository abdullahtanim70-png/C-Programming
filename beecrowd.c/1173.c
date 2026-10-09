#include<stdio.h>
int main()
{
    int N[10],i,j;

    scanf("%d",&j);


    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,j);
        j=j*2;
    }
}
