//Problem no-1010
//https://www.beecrowd.com.br/judge/en/problems/view/1010

#include<stdio.h>
int main(){
    int p1, unit_p1;
    double unit_pr_p1;
    int p2, unit_p2;
    double unit_pr_p2; 
    double bill;

    scanf("%d %d %lf", &p1, &unit_p1, &unit_pr_p1);
    scanf("%d %d %lf", &p2, &unit_p2, &unit_pr_p2);

    bill = ((unit_p1 * unit_pr_p1) + (unit_p2 * unit_pr_p2));

    printf("VALOR A PAGAR: R$ %.2lf\n", bill);

    return 0;
}



