//Problem no-2702
//https://www.beecrowd.com.br/judge/en/problems/view/2702

#include<stdio.h>
int main(){
    int miss=0;
    int ch1,bf1,ps1;
    int ch2,bf2,ps2;
    scanf("%d %d %d",&ch1,&bf1,&ps1);
    scanf("%d %d %d",&ch2,&bf2,&ps2);

    if(ch2>ch1){
        miss+=(ch2-ch1);
    }
    if(bf2>bf1){
        miss+=(bf2-bf1);
    }
    if(ps2>ps1){
        miss+=(ps2-ps1);
    }
    printf("%d\n",miss);

    return 0;
}
