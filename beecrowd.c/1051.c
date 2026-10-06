/*Salary
from 0.00 to R$ 2,000.00
from R$ 2,000.01 to R$ 3,000.00
from R$ 3,000.01 to R$ 4,500.00
more than R$ 4,500.00

Taxes
Without taxes
8 %
18 %
28 %*/

#include <stdio.h>
int main(){
    double a;
    scanf("%lf",&a);
    if(a<=2000.00){
        printf("Isento\n");
    }
    else if(2000.00<a && a<=3000.00){
        printf("R$ %.2lf\n",(a-2000.00)*0.08);
    }
    else if(3000.00<a && a<=4500.00){
        printf("R$ %.2lf\n",(1000.00*0.08)+((a-3000.00)*0.18));
    }
    else if(a>4500.00){
        printf("R$ %.2lf\n",(1000.00*0.08)+(1500.00*0.18)+((a-4500.00)*0.28));
    }
    return 0;
}