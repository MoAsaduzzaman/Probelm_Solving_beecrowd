//Problem no-1197
//https://www.beecrowd.com.br/judge/en/problems/view/1197

#include<stdio.h>
int main(){
    int v,t,s;
    while(scanf("%d %d",&v,&t)!=EOF){
        s=(v*t)*2;
        printf("%d\n",s);
    }

    return 0;
}
