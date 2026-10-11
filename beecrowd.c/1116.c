#include<stdio.h>
int main()
{
    int X,Y,i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&X);
        scanf("%d",&Y);
        if(Y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n",(double)X/Y);
        }
    }
}
