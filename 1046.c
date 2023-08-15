//Problem no-1046
//https://www.beecrowd.com.br/judge/en/problems/view/1046

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    if (a==b){
        printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    }else if(a<=b){
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }else{
        printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    }

    return 0;
}
