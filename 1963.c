//Problem no-1963
//https://www.beecrowd.com.br/judge/en/problems/view/1963

#include<stdio.h>
int main(){

    double A,B,C;

    scanf("%lf %lf",&A,&B);
    C=(((B-A)*100.00)/A);
    printf("%.2lf%%\n",C);

    return 0;
}

