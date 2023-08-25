//Problem no-1985
//https://www.beecrowd.com.br/judge/en/problems/view/1985

#include <stdio.h>
int main() {
    double V, D;
    double PI=3.14;
    
    while (scanf("%lf %lf", &V, &D) != EOF) {
        double radius = D / 2.0;
        double height = V / (PI * radius * radius);
        double area = PI * radius * radius;

        printf("ALTURA = %.2lf\n", height);
        printf("AREA = %.2lf\n", area);
    }
    
    return 0;
}
