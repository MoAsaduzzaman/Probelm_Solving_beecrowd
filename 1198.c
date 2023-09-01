//Problem no-1198
//https://www.beecrowd.com.br/judge/en/problems/view/1198

#include<stdio.h>
int main(){
    long long int A,B;

    while(scanf("%lld %lld",&A,&B)!=EOF){
        if(A>B){
            printf("%lld\n",A-B);      
        }else{
            printf("%lld\n",B-A); 
        }
    }
    return 0;
}
