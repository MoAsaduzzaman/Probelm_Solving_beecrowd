//Problem no-1070
//https://www.beecrowd.com.br/judge/en/problems/view/1070

#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    for(int i=x; i<=x+11; i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }

    return 0;
}
