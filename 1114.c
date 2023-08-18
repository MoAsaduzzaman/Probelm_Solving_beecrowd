//Problem no-1114
//https://www.beecrowd.com.br/judge/en/problems/view/1114

#include<stdio.h>
int main(){

    int a,pass=2002;
    
    while(1){
    scanf("%d\n",&a);

        if(a==pass){
        printf("Acesso Permitido\n");
        break;
        }else{
        printf("Senha Invalida\n");
        }
    }
    
    return 0;
}
