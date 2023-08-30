//Problem no-1585
//https://www.beecrowd.com.br/judge/en/problems/view/1585

#include<stdio.h>
int main(){
    int N,i,x,y,ans;
    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%d %d",&x,&y);
        ans=(x*y)/2;
        printf("%d cm2\n",ans);
        ans=0;
    }

    return 0;
}
