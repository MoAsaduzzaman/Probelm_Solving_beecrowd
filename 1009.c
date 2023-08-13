//Problem no-1009
//https://www.beecrowd.com.br/judge/en/problems/view/1009

#include<stdio.h>
int main(){
    char seller_nm;
    double fixd_sal, sels_in_one_month, total_sal;

    scanf("%s", &seller_nm);
    scanf("%lf", &fixd_sal);
    scanf("%lf", &sels_in_one_month);

    total_sal = (fixd_sal + ((sels_in_one_month * 15) / 100));

    printf("TOTAL = R$ %.2lf\n",total_sal);

    return 0;
}