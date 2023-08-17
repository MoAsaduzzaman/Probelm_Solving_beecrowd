//Problem no-1132
//https://www.beecrowd.com.br/judge/en/problems/view/1132

#include<stdio.h>
int main(){
    int X,Y,sum=0;
    scanf("%d %d ",&X,&Y);

    if(X<Y){
        for(int a = X; a<=Y; a++){
            if(a%13!=0){
                sum=sum+a;

            }
        }
    }else{
        for(int a=Y; a<=X; a++){
            if(a%13!=0){
                sum=sum+a;
            }
        }
    }

    printf("%d\n",sum);
    
    return 0;
}

