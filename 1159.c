//Problem no-1159
//https://www.beecrowd.com.br/judge/en/problems/view/1159

#include<stdio.h>
int main(){

   int X,sum=0;
   
   while(1){
    scanf("%d",&X);
    sum=0;
        if(X==0)
            break;
        else if(X%2==0){
            for(int i=X; i<=X+8; i+=2){
                    sum+=i;   
            }
        
        }else{
            for(int i=X+1; i<=X+9; i+=2){
                sum+=i;
            }
        }
        printf("%d\n",sum);
   }

    return 0;
}