//Problem no-1074
//https://www.beecrowd.com.br/judge/en/problems/view/1074

#include<stdio.h>
int main(){
    int N,a;
    scanf("%d",&N);

    for(int i=1; i<=N; i++){
        scanf("%d",&a); 
        if(a==0){
            printf("NULL\n");
        }else if(a<0 && a%2==0){
             printf("EVEN NEGATIVE\n");
        }else if(a<0 && a%2==-1){
            printf("ODD NEGATIVE\n");
        }else if(a>0 && a%2==0){
            printf("EVEN POSITIVE\n");
        }else if(a>0 && a%2==1){
            printf("ODD POSITIVE\n");
        }        
    }
       
    return 0;
}