//Problem no-1014
//https://www.beecrowd.com.br/judge/en/problems/view/1014

#include<stdio.h>
int main(){
    
    int dis;
    double used_fuel;

    scanf("%d",&dis);
    scanf("%lf",&used_fuel);

    double consumption = (dis / used_fuel);
    printf("%.3lf km/l\n",consumption);
    
    return 0;
}
