//Problem no-1142
//https://www.beecrowd.com.br/judge/en/problems/view/1142

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    for(int i=0; i<N*4; i+=4){
        printf("%d %d %d PUM\n",(i+1),(i+2),(i+3));
    }
    
    return 0;
}
