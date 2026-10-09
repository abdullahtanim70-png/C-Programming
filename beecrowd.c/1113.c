#include<stdio.h>
int main()
{
    int j=1,X,Y;

    while(j>0)
    {

        scanf("%d",&X);
        scanf("%d",&Y);
        if(X<Y)
        {
            printf("Crescente\n");
        }
        else if(X>Y)
        {
            printf("Decrescente\n");
        }
        else if(X==Y)
        {
            break;
        }
    }
}
