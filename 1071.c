//Problem no-1071
//https://www.beecrowd.com.br/judge/en/problems/view/1071

#include<stdio.h>
int main(){
    int x,y,sum=0;
    scanf("%d %d",&x, &y);

    int min,max;
    if(x>y){
        max=x;
        min=y;
    }else{
        max=y;
        min=x;
    }
    for(int i=min+1 ; i<max; i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
