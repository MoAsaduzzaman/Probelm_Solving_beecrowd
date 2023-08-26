//Problem no-2235
//https://www.beecrowd.com.br/judge/en/problems/view/2135

#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    if(A-B==0)
        printf("S\n");
    else if(A-C==0)
        printf("S\n");
    else if(B-C==0)
        printf("S\n");
    else if((A+B)-C==0)
        printf("S\n");
    else if((A+C)-B==0)
        printf("S\n");
    else if((B+C)-A==0)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
