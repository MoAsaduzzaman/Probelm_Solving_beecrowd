//Problem no-1143
//https://www.beecrowd.com.br/judge/en/problems/view/1143

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    for(int i=1; i<=N; i++){
        printf("%d %d %d\n",(i),(i*i),(i*i*i));
    }

    return 0;
}
