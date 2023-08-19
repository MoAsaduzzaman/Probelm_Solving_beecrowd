//Problem no-1157
//https://www.beecrowd.com.br/judge/en/problems/view/1157

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    for(int i=1; i<=N; i++){
        if(N%i==0){
            printf("%d\n",i);
        }
    }
    
    return 0;
}
