//Problem no-2355
//https://www.beecrowd.com.br/judge/en/problems/view/2355

#include<stdio.h>
#include<math.h>
int main(){
    double N;
    double A,B;
    while(scanf("%lf",&N)){
        if(N==0) break;

        A=floor((1*N)/90.0);
        B=ceil((7*N)/90.0);

        printf("Brasil %.0lf x Alemanha %.0lf\n",A,B);
    }

    return 0;
}
