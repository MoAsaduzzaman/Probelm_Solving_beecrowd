//Problem no-2344
//https://www.beecrowd.com.br/judge/en/problems/view/2344

#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    if(a==0){
        printf("E\n");
    }else if(a>=1 && a<=35){
        printf("D\n");
    }else if(a>=36 && a<=60){
        printf("C\n");
    }else if(a>=61 && a<=85){
        printf("B\n");
    }else{
        printf("A\n");
    }

    return 0;
}
