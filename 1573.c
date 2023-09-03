//Problem no-1573
//https://www.beecrowd.com.br/judge/en/problems/view/1573

#include<stdio.h>
#include<math.h>
int main(){

    int A,B,C,X;
    
    while(scanf("%d %d %d",&A,&B,&C)){
        if(A==0 && B==0 && C==0) break;
        
        X= cbrt(A*B*C);
        printf("%d\n",X);
    }

    return 0;
}
