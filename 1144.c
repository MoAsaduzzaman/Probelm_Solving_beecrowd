//Problem no-1144
//https://www.beecrowd.com.br/judge/en/problems/view/1144

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    for(int i=1; i<=N; i++){
        printf("%d %d %d\n",(i),(i*i),(i*i*i));
        printf("%d %d %d\n",(i),(i*i)+1,(i*i*i)+1);
    }

    return 0;
}
