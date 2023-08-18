//Problem no-1116
//https://www.beecrowd.com.br/judge/en/problems/view/1116

#include<stdio.h>
int main(){
    int N;
    double x,y;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        scanf("%lf %lf",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }else{
            printf("%.1lf\n",(x/y));
        }     
    }

    return 0;
}
