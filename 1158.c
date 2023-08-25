//Problem no-1158
//https://www.beecrowd.com.br/judge/en/problems/view/1158

#include<stdio.h>
int main(){
    int N,X,Y,i,c,j;
    scanf("%d",&N);

    for(i=1; i<=N; i++){
        scanf("%d %d",&X,&Y);
        if(X%2==1){
            c=0;
            for(j=1;j<=Y;j++){
                c+=X;
                X+=2;
            }
            printf("%d\n",c);
        }else{
            X++;
            c=0;
            for(j=1; j<=Y; j++){
                c+=X;
                X+=2;
            }
            printf("%d\n",c);
        }
    }
    
    return 0;
}
