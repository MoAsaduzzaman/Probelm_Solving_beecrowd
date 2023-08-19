//Problem no-1154
//https://www.beecrowd.com.br/judge/en/problems/view/1154

#include<stdio.h>
int main(){
    int age,sum=0;
    double avg;
    double d=0.00;

    while(1){
        scanf("%d",&age);
        if(age<0){
            break;
        }else{
            sum+=age;
            d++;
        }
    }
    avg=sum/d;
    printf("%.2lf\n",avg);

    return 0;
}
