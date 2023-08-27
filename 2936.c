//Problem no-2936
//https://www.beecrowd.com.br/judge/en/problems/view/2936

#include<stdio.h>
int main(){
    int a1,a2,a3,a4,a5,ans;
    scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);

    ans=(a1*300)+(a2*1500)+(a3*600)+(a4*1000)+(a5*150)+225;

    printf("%d\n",ans);

    return 0;
}
