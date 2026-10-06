#include<stdio.h>
int main()
{
    double A,B,C,p,area;
    scanf("%lf%lf%lf",&A,&B,&C);
    p=(A+B+C);
    area=(C*(A+B))/2;
    
    if(A<(B+C) || B<(A+C) || C<(A+B))
        {
            printf("Perimetro = %.1lf\n",p);
        }
     else
        {
            printf("Area = %.1lf\n",area);
        }
    return 0;
}