#include<stdio.h>
int main()
{
    long long int T,N,Fib[61];

    scanf("%lld",&T);
    Fib[0]=0;
    Fib[1]=1;
    for(int j=2; j<=60; j++)
    {
        Fib[j]=Fib[j-1]+Fib[j-2];
    }
    for(int i=0; i<T; i++)
    {

        scanf(" %lld",&N);
        printf("Fib(%lld) = %lld\n",N,Fib[N]);

    }

}
