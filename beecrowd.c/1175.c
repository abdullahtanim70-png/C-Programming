#include<stdio.h>
int main()
{
    int N[20],i,j=19;
    for(i=0;i<20;i++)
    {
    scanf("%d",&N[i]);
    }

    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,N[j]);
        j=j-1;
    }
}
