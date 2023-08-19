//Problem no-1153
//https://www.beecrowd.com.br/judge/en/problems/view/1153

#include<stdio.h>
int main(){
    int N,i,fact=1;
    scanf("%d",&N);

    for(i=N; i>=1; i--){
        fact=fact*i;
    }
    printf("%d\n",fact);

    return 0;
}