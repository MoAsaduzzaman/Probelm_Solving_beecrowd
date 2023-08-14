//Problem no-1035
//https://www.beecrowd.com.br/judge/en/problems/view/1035

#include<stdio.h>
int main(){
    int A,B,C,D;
    scanf("%d %d %d %d",&A, &B, &C, &D);
    int x=C+D;
    int y=A+B;

    if(B>C && D>A && x>y && C>0 && D>0 && A%2==0){
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }

    return 0;
}
