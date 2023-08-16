//Problem no-1064
//https://www.beecrowd.com.br/judge/en/problems/view/1064

#include<stdio.h>
int main(){
    int sum=0;
    float sum2=0;
    float x;
    for(int i=1; i<=6; i++){
        scanf("%f",&x);
        if(x>0){
        sum=sum+1;
        sum2=sum2+x;
        }
    }
    printf("%d valores positivos\n",sum);
    printf("%.1f\n",sum2/sum);

    return 0;
}
