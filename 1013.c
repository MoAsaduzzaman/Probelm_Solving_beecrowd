//Problem no-1013
//https://www.beecrowd.com.br/judge/en/problems/view/1013

#include <stdio.h>
int main(){
    int a,b,c,d;
    
    scanf("%d%d%d",&a,&b,&c);
    
    d=(a+b+abs(a-b))/2;
    d=(d+c+abs(d-c))/2;

    printf("%d eh o maior\n",d);
    return 0;
}
