//Problem no-1079
//https://www.beecrowd.com.br/judge/en/problems/view/1079

#include<stdio.h>
int main(){
    int N;
    double a,b,c,sum,avg;
    scanf("%d",&N);

    for(int i=1; i<=N; i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        sum=(a*2)+(b*3)+(c*5);
        avg=sum/(2+3+5);
        printf("%.1lf\n",avg);
    }

    return 0;
}
