//Problem no-1178
//https://www.beecrowd.com.br/judge/en/problems/view/1178

#include<stdio.h>
int main(){
    double T,a[100];
    int i,j=0;

    scanf("%lf",&T);

    for(i=0; i<100; i++){
        printf("N[%d] = %.4lf\n",i,T);
        T/=2;
    }

    return 0;
}