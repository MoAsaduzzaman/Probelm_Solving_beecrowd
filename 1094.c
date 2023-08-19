//Problem no-1094
//https://www.beecrowd.com.br/judge/en/problems/view/1094

#include<stdio.h>
int main(){
    int N;
    int a;
    char b;
    int sum1=0,sum2=0,sum3=0,sum4;
    double c,r,s;
    scanf("%d",&N);

    for(int i=1; i<=N; i++){

        scanf("%d %c",&a,&b);

        if(b=='C'){
            sum1+=a;
        }
        if(b=='R'){
            sum2+=a;
        }
        if(b=='S'){
            sum3+=a;
        }
    }

    sum4=sum1+sum2+sum3;
    c=(sum1*100.00)/sum4;
    r=(sum2*100.00)/sum4;
    s=(sum3*100.00)/sum4;

    printf("Total: %d cobaias\n",sum4);
    printf("Total de coelhos: %d\n",sum1);
    printf("Total de ratos: %d\n",sum2);
    printf("Total de sapos: %d\n",sum3);
    printf("Percentual de coelhos: %.2lf %%\n",c);
    printf("Percentual de ratos: %.2lf %%\n",r);
    printf("Percentual de sapos: %.2lf %%\n",s);

    return 0;
}
