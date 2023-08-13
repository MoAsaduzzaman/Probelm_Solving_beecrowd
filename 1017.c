//Problem no-1017
//https://www.beecrowd.com.br/judge/en/problems/view/1017

#include<stdio.h>
int main(){
    double s,t,v,fuel_need;
    scanf("%lf",&t);
    scanf("%lf",&v);
    s = v * t;
    fuel_need = s/12;

    printf("%.3lf\n",fuel_need);

    return 0;
}