#include<stdio.h>
int main()
{
    int i,N,X,Y,j,total=0;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        scanf("%d",&X);
        scanf("%d",&Y);
        if(X<Y)
        {
            for(j=X+1;j<Y;j++)
            {
                if(j%2!=0)
                {
                    total=total+j;
                     printf("%d\n",total);
                }
            }
        }
        else if(X>Y)
        {
            for(j=Y+1;j<X;j++)
            {
                if(j%2!=0)
                {
                    total=total+j; 
                    printf("%d\n",total);

                }
            }
        }
        else if(X==Y){
            printf("0\n");
        }
       
    }
    return 0;
}
