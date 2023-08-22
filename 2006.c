//Problem no-2006
//https://www.beecrowd.com.br/judge/en/problems/view/2006

#include<stdio.h>
int main(){
    int T,arr[5],i,sum=0;
    scanf("%d",&T);
   
    for(i=0; i<5; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==T){
            sum++;
        }
    }
    printf("%d\n",sum);

    return 0;
}
