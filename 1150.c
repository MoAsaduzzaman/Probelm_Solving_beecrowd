//Problem no-1150
//https://www.beecrowd.com.br/judge/en/problems/view/1150

#include<stdio.h>
int main(){
    int X,Z,a,b,c=0;
    scanf("%d %d",&X,&Z);
    while(Z<=X)
    scanf("%d",&Z);

    for(a=X,b=0; b<Z;a++){
        b+=a;
        c++;
    }
      printf("%d\n",c);
    
    return 0;
}
