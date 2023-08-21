//Problem no-1589
//https://www.beecrowd.com.br/judge/en/problems/view/1589

#include<stdio.h>
int main(){
    int N,i,T1,T2,SUM;
    scanf("%d",&N);
    
    for(i=1; i<=N; i++ ){
        scanf("%d %d",&T1,&T2);
            SUM=T1+T2;
            printf("%d\n",SUM);
    }
    
    return 0;
}
