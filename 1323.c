//Problem no-1323
//https://www.beecrowd.com.br/judge/en/problems/view/1323

#include<stdio.h>
int main(){

    int N,i,ans=0;
    
    while(scanf("%d",&N)==1){
        if(N==0){
            break;
        }
        ans=(N*(N+1)*((2*N)+1))/6;
        printf("%d\n",ans);
    }
    
    return 0;
}
