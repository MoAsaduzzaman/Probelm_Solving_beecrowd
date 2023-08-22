//Problem no-1933
//https://www.beecrowd.com.br/judge/en/problems/view/1933

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if(a==b){
        printf("%d\n",a);
    }
    if(a>b){
        printf("%d\n",a);
    }
    if(a<b){
        printf("%d\n",b);
    }

    return 0;
}
