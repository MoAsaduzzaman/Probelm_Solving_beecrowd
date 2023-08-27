//Problem no-1173
//https://www.beecrowd.com.br/judge/en/problems/view/1173

#include<stdio.h>
int main(){
    int X;
    int arr[10],i;

    scanf("%d",&X);
    for(i=0; i<10; i++){
        arr[i]=X;
        printf("N[%d] = %d\n",i,X);
        X*=2;
    }

    return 0;
}
