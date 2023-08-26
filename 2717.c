//Problem no-2717
//https://www.beecrowd.com.br/judge/en/problems/view/2717

#include<stdio.h>
int main(){
    int N,A,B;
    scanf("%d",&N);
    scanf("%d %d",&A,&B);

    if((A+B)<=N){
        printf("Farei hoje!\n");
    }else{
        printf("Deixa para amanha!\n");
    }
    
    return 0;
}
