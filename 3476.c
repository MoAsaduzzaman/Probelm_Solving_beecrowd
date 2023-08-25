//Problem no-3476
//https://www.beecrowd.com.br/judge/en/problems/view/3476

#include <stdio.h>
int main() {
    double S, B, C;
    scanf("%lf %lf %lf", &S, &B, &C);

    double a = 3.0/((1/S)+(1/B)+(1/C));
    double ans=a/3.0;
    printf("%.3lf\n", ans);

    return 0;
}
