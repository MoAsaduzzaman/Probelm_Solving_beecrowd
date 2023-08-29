//Problem no-3342
//https://www.beecrowd.com.br/judge/en/problems/view/3342

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int white = (N*N+1)/2;
    int black = (N*N)/2;

    printf("%d casas brancas e %d casas pretas\n",white,black); 

    return 0;
}
