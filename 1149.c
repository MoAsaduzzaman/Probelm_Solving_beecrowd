//Problem no-1149
//https://www.beecrowd.com.br/judge/en/problems/view/1149

#include<stdio.h>
int main(){
    int A,N,i,sum=0;
    scanf("%d %d",&A,&N);

    while(N<=0)
        scanf("%d",&N);
    
    for(i=1; i<=N; i++){
        sum+=A;
        A++;
    }
    printf("%d\n",sum);

    return 0;
}
