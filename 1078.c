//Problem no-1078
//https://www.beecrowd.com.br/judge/en/problems/view/1078

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

   for(int i=1; i<=10; i++){
    printf("%d x %d = %d\n",i,N,i*N);
   }
   
    return 0;
}