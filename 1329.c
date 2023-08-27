//Problem no-1329
//https://www.beecrowd.com.br/judge/en/problems/view/1329

#include<stdio.h>
int main(){
    int N,A[10000],i,j,x,y;

    while(scanf("%d",&N)==1){
        x=0,y=0;
        if(N==0){
        break;
        }
        for(i=0; i<N; i++){
            scanf("%d",&A[i]);
        }
        for(j=0; j<N; j++){
            if(A[j]==0){
                x++;
            }
            else{
                y++; 
            }
        }
            printf("Mary won %d times and John won %d times\n",x,y);       
    }

    return 0;
}
