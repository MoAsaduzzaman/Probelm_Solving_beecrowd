//Problem no-1008
//https://www.beecrowd.com.br/judge/en/problems/view/1008

#include<stdio.h>
int main(){
    int employees_num;
    int working_hr;
    double sal_per_hr, total_sal;

    scanf("%d", &employees_num);
    scanf("%d", &working_hr);
    scanf("%lf", &sal_per_hr);

    total_sal = (working_hr * sal_per_hr);

    printf("NUMBER = %d\n",employees_num);
    printf("SALARY = U$ %.2lf\n", total_sal);

    return 0;
}