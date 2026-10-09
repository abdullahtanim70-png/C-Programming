#include<stdio.h>
int main()
{
    int a,i=1;
    while(i>0)
    {
        scanf("%d",&a);
        if(a==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
}