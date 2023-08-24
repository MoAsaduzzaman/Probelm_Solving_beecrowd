//Problem no-3065
//https://www.beecrowd.com.br/judge/en/problems/view/3065

#include<stdio.h>
int main(){
    int N,i,a,b,c,sum=0,s=0;

        while(1){
            scanf("%d",&N);
            if(N>=1 && N<=100){
                for(i=0; i<N; i++){
                    scanf("%d",&a);
                    sum+=a;       
                }
                s++;
                printf("Teste %d\n",s);
                printf("%d\n\n",sum);
                sum=0;
            }else{
                break;
            }
        }  
    return 0;
}
