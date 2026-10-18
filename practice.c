#include<stdio.h>
int main()
{
    int n;

    for(int j=1;; j++)
    {

        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            int sum=0;
            for(int i=1; i<=n; i++)
            {
                sum=sum+i;

            }

        }
        printf("%d\n",sum);
    }

}
