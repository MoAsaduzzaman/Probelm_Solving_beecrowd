//Problem no-1037
//https://www.beecrowd.com.br/judge/en/problems/view/1037

#include<stdio.h>
int main(){
    double x;
    scanf("%lf",&x);

        if(x<0 || x>100){
        printf("Fora de intervalo\n");
        }else{
        if (x>=0 && x<=25){
            printf("Intervalo [0,25]\n");
        }else if (x>25 && x<=50){
            printf("Intervalo (25,50]\n");
        }else if (x>50 && x<=75){
            printf("Intervalo (50,75]\n");
        }else{
            printf("Intervalo (75,100]\n");
          }
        }
   
    return 0;
}
