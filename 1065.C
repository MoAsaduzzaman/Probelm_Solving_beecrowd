//Problem no-1065
//https://www.beecrowd.com.br/judge/en/problems/view/1065

#include<stdio.h>
int main(){
    int sum=0;
    int x;
    for(int i=1; i<=5; i++){
        scanf("%d",&x);
        if(x%2==0){
        sum=sum+1;
        }
    }
    printf("%d valores pares\n",sum);  

    return 0;
}
