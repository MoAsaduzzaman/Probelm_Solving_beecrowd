//Problem no-1715
//https://www.beecrowd.com.br/judge/en/problems/view/1715

#include<stdio.h>
int main(){
    int N,M,X,Y,Z,i,j;
    scanf("%d %d",&N,&M);

    int ans=0;
    for(i=0; i<N; i++){

        int gols=0;

        for(j=0; j<M; j++){
            scanf("%d",&X);
            if(X>0){
                gols++;
            }
        }
        if(gols==M){
            ans++;
        }
    }
    printf("%d\n",ans);

    return 0;
}
