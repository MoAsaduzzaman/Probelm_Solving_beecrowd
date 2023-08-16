//Problem no-1067
//https://www.beecrowd.com.br/judge/en/problems/view/1067

#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    for(int i=1; i<=x; i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }

    return 0;
}
