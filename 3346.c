//Problem no-3346
//https://www.beecrowd.com.br/judge/en/problems/view/3346

#include <stdio.h>
int main() {
    double a,b,ans;
    scanf("%lf%lf", &a,&b);

    ans=((((1.0 + a/100.00) * (1.0 + b/100.00)) - 1.0) * 100.0);
    
    printf("%.6lf\n",ans);

    return 0;
}