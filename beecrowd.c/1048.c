#include <stdio.h>
int main()
{
    double s;
    scanf("%lf", &s);
    if (0 <= s && s <= 400.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", s + (s * 0.15), s * 0.15);
    }
    else if (400.01 <= s && s <= 800.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", s + (s * 0.12), s * 0.12);
    }
    else if (800.01 <= s && s <= 1200.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", s + (s * 0.10), s * 0.10);
    }
    else if (1200.01 <= s && s <= 2000.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", s + (s * 0.07), s * 0.07);
    }
    else if (2000.00 < s)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", s + (s * 0.04), s * 0.04);
    }
    return 0;
}
