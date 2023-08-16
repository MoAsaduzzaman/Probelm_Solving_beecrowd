//Problem no-1072
//https://www.beecrowd.com.br/judge/en/problems/view/1072

#include<stdio.h>
int main(){
    int N,a;
    int in=0,out=0;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        scanf("%d\n",&a);

        if(a>=10 && a<=20){
        in++;
         }else{
        out++;
        }  
    }

    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}
