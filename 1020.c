//Problem no-1020
//https://www.beecrowd.com.br/judge/en/problems/view/1020

#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);

    int year = days/365;
    int month= (days%365)/30;
    days= days%365%30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);

    return 0;
}
