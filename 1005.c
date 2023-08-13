//Problem no-1005
//https://www.beecrowd.com.br/judge/en/problems/view/1005

#include<stdio.h>
int main(){

    double A,B,MEDIA;
    scanf("%lf %lf ",&A ,&B);
    MEDIA = ((3.5*A+7.5*B)/(3.5+7.5));

    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}