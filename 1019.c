//Problem no-1019
//https://www.beecrowd.com.br/judge/en/problems/view/1019

#include<stdio.h>
int main(){
    int seconds;
    scanf("%d",&seconds);

    int hour = seconds/3600;
    seconds=seconds-(hour*3600);

    int minutes= seconds/60;
    seconds=seconds-(minutes*60);

    printf("%d:%d:%d\n", hour, minutes,seconds);

    return 0;
}