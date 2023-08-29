//Problem no-1161
//https://www.beecrowd.com.br/judge/en/problems/view/1161

#include<stdio.h>
int main(){
    int i;
    long long int x,y,tmp1,tmp2;

    while(scanf("%lld %lld",&x,&y)!=EOF){
        tmp1=1;
        tmp2=1;

        for(i=x; i>0; --i){
            tmp1=tmp1*x;
            x--;
        }
        for(i=y; i>0; --i){
            tmp2=tmp2*y;
            y--;
        }

        printf("%lld\n",(tmp1+tmp2));
    }

    return 0;
}
