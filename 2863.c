//Problem no-2863
//https://www.beecrowd.com.br/judge/en/problems/view/2863

#include<stdio.h>
int main(){
    int N,i;
    float A,B;
    while(scanf("%d",&N)!=EOF){
        float MIN=100.00;
        for(i=0; i<N; i++){
            scanf("%f",&A);
            if(A<MIN){
                MIN=A;
            }  
        }
        printf("%.2f\n",MIN);   
    }

    return 0;
}
