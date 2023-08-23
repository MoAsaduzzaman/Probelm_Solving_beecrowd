//Problem no-3302
//https://www.beecrowd.com.br/judge/en/problems/view/3302

#include<stdio.h>
int main(){
    int N,i,arr[100],a=0;
    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<N;i++){
        a++;
        printf("resposta %d: %d\n",a,arr[i]);
          
    }

    return 0;
}
