//Problem no-1177
//https://www.beecrowd.com.br/judge/en/problems/view/1177

#include<stdio.h>
int main(){
    int T,i,j=0,a[1000];

    scanf("%d",&T);

    for(i=0; i<1000; i++){
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==T) j=0;
    }

    return 0;
}





