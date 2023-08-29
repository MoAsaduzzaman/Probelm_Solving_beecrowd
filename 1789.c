//Problem no-1789
//https://www.beecrowd.com.br/judge/en/problems/view/1789

#include<stdio.h>
int main(){
    int N,X,i,max=0;

    while(scanf("%d",&N)!=EOF){
        for(i=0,max=0; i<N; i++){
            scanf("%d",&X);
            if(X>max){
                max=X;
            }    
        }
        
        if(max<10){
            printf("1\n");
        }
        if(max>=10 && max<20){
            printf("2\n");
        }
        if(max>=20){
            printf("3\n");
        }
    }

    return 0;
}
