//Problem no-1095
//https://www.beecrowd.com.br/judge/en/problems/view/1095

#include<stdio.h>
int main(){
    int i,j;

    for(i=1,j=60; i<=60, j>=0; i+=3,j-=5){
         printf("I=%d J=%d\n",i,j);        
    }

    return 0;
}
