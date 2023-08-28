//Problem no-2388
//https://www.beecrowd.com.br/judge/en/problems/view/2388

#include<stdio.h>
int main(){
    int N,i,A,B,mul,ans=0;
    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%d %d",&A,&B);
        mul=A*B;
        ans+=mul;
    }

    printf("%d\n",ans);

    return 0;
}
