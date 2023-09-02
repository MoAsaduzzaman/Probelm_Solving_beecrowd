//Problem no-2581
//https://www.beecrowd.com.br/judge/en/problems/view/2581

#include<stdio.h>
#include<string.h>
int main(){
    int N,i;
    char a[200];

    scanf("%d",&N);
    for(i=0; i<=N; i++){
        gets(a);
        if(i!=0){
            printf("I am Toorg!\n"); 
        }     
    }
    return 0;
}
