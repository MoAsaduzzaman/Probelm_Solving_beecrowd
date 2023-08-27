//Problem no-3145
//https://www.beecrowd.com.br/judge/en/problems/view/3145

#include<stdio.h>
int main(){
    double X,Y;
    double dis;
    scanf("%lf %lf ",&X,&Y);

    dis=(Y/(X+2.00));
    printf("%.2lf\n",dis);

    return 0;
}
