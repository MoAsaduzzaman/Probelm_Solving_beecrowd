//Problem no-2862
//https://www.beecrowd.com.br/judge/en/problems/view/2862

#include<stdio.h>
int main(){
    int N,i,x;
    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%d",&x);
        if(x>8000){
            printf("Mais de 8000!\n");
        }else{
            printf("Inseto!\n");
        }
    }
    
    return 0;
}
