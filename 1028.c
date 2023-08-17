//Problem no-1028
//https://www.beecrowd.com.br/judge/en/problems/view/1028

#include<stdio.h>
int main(){
    int N,F1,F2;
     int dividend,divisor,c;
    scanf("%d\n",&N);

    for(int i=0; i<N; i++){
        scanf("%d %d",&F1,&F2);
        
        if(F2>F1){
            dividend=F2;
            divisor=F1;
        }else{
            dividend=F1;
            divisor=F2;
        }
        while(dividend % divisor !=0){
            c=dividend%divisor;
            dividend=divisor;
            divisor=c;
        }

         printf("%d\n",divisor);     
    }
   
    return 0;
}
