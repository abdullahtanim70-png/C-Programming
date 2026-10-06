#include <stdio.h>

int main() {
    double num, count = 0;
    double total=0;

    for(int i = 0; i <6; i++){
        scanf("%lf", &num);

        if(num>0){
            count++;
        total=(total+num);
        }
    }

    printf("%.0lf valores positivos\n", count);
    printf("%.1lf\n",total/count);

    return 0;
}