//Problem no-1805
//https://www.beecrowd.com.br/judge/en/problems/view/1805

#include<stdio.h>
int main(){
    long long int A,B,sum=0;
    scanf("%lld %lld",&A,&B);

    if(A>=0){
        sum= ((A+B)*(B-A+1))/2;
        printf("%lld\n",sum);
    }

    return 0;
}

