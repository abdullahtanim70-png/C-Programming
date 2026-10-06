#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,Media,N5,avg;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    Media=((N1*2+N2*3+N3*4+N4*1))/(2+3+4+1);
    printf("Media: %.1lf\n",Media);
    if(Media>=7.00)
    {
        printf("Aluno aprovado.\n");
    }
    else if(Media<5.00)
    {
        printf("Aluno reprovado.\n");
    }
    else if(5.00<=Media && 6.9>=Media)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&N5);
        printf("Nota do exame: %.1lf\n",N5);
        avg=(Media+N5)/2;
        if(avg>=5.00)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avg<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",avg);
    }
    return 0;
}
