//Problem no-2763
//https://www.beecrowd.com.br/judge/en/problems/view/2763

#include<stdio.h>
int main(){
    int a,b,c,d;
    while(scanf("%d.%d.%d-%d",&a,&b,&c,&d)!=EOF){
        printf("%03d\n%03d\n%03d\n%02d\n",a,b,c,d);
    }

    return 0;
}
