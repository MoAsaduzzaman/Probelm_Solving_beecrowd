//Problem no-1146
//https://www.beecrowd.com.br/judge/en/problems/view/1146

#include<stdio.h>
int main(){

    int x,i;

    while(1){   
    scanf("%d",&x);

        if(x==0){ 
            break;  
        }else{
             for(i=1; i<x; i++){
                printf("%d ",i);
            }
        }
        printf("%d\n",x);
    }
    return 0;
}
