//Problem no-1985
//https://www.beecrowd.com.br/judge/en/problems/view/1985

#include<stdio.h>
int main(){
    double N,p,q,i;
    double sum,t=0;
    scanf("%lf",&N);

    for(i=0; i<N; i++){
        scanf("%lf %lf",&p,&q);
        if(p==1001){
            sum=q*1.50;
            t+=sum;
        }
        if(p==1002){
            sum=q*2.50;
            t+=sum;
        }
         if(p==1003){
            sum=q*3.50;
            t+=sum;
        }
         if(p==1004){
            sum=q*4.50;
            t+=sum;
        }
         if(p==1005){
            sum=q*5.50;
            t+=sum;
        }  
    }
    printf("%.2lf\n",t);

    return 0;
}
