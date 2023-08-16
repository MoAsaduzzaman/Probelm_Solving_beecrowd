//Problem no-1060
//https://www.beecrowd.com.br/judge/en/problems/view/1060

#include<stdio.h>
int main(){
    int sum=0;
    float x;
    for(int i=1; i<=6; i++){
        scanf("%f",&x);
        if(x>0){
        sum=sum+1;
        }
    }
    printf("%d valores positivos\n",sum);

    return 0;
}
