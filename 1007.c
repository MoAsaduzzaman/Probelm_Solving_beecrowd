//Problem no-1007
//https://www.beecrowd.com.br/judge/en/problems/view/1007

#include<stdio.h>
int main(){
    int A,B,C,D,Dif;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    Dif = ((A*B) - (C*D));

    printf("DIFERENCA = %d\n", Dif);
    return 0;
}