//Problem no-1066
//https://www.beecrowd.com.br/judge/en/problems/view/1066

#include<stdio.h>
int main(){
    int sum1=0,sum2=0,sum3=0,sum4=0;
    int x;
    for(int i=1; i<=5; i++){
        scanf("%d",&x);
        if(x%2==0){
            sum1=sum1+1;
        }
        if(x%2!=0){
            sum2=sum2+1;
        }
        if(x>0){
            sum3=sum3+1;
        }
        if(x<0){
            sum4=sum4+1;
        }  
    }
    printf("%d valor(es) par(es)\n",sum1); 
    printf("%d valor(es) impar(es)\n",sum2); 
    printf("%d valor(es) positivo(s)\n",sum3); 
    printf("%d valor(es) negativo(s)\n",sum4); 

    return 0;
}
