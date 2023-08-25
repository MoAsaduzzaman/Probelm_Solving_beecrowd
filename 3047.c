//Problem no-3047
//https://www.beecrowd.com.br/judge/en/problems/view/3047

#include<stdio.h>
int main(){
    int M,A,B,C;
    scanf("%d %d %d",&M,&A,&B);

    C=M-(A+B);

    if(A>B && A>C){
        printf("%d\n",A);
    }
    if(B>A && B>C){
        printf("%d\n",B);
    }
    if(C>A && C>B){
        printf("%d\n",C);
    }

    return 0;
}
