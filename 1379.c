//Problem no-1379
//https://www.beecrowd.com.br/judge/en/problems/view/1379

#include<stdio.h>
int main(){

    int A,B,i;

        while(scanf("%d %d",&A,&B)){
            if(A==0 && B==0) break;
           
                printf("%d\n",2*A-B);
        }

    return 0;

}