//Problem no-2950
//https://www.beecrowd.com.br/judge/en/problems/view/2950

#include<stdio.h>
int main(){
    double N,X,Y;
    double ans;
    scanf("%lf %lf %lf",&N,&X,&Y);

    ans=(N/(X+Y));
    
    printf("%.2lf\n",ans);

    return 0;
}
