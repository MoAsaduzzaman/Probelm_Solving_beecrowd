//Problem no-2896
//https://www.beecrowd.com.br/judge/en/problems/view/2896

#include<stdio.h>
int main(){
    int T,N,K,i,ans;
    scanf("%d",&T);

    for(i=0; i<T; i++){
        scanf("%d %d",&N,&K);
        ans=((N%K)+(N/K));
        printf("%d\n",ans);
    }
    
    return 0;
}