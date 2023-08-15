//Problem no-1048
//https://www.beecrowd.com.br/judge/en/problems/view/1048

#include<stdio.h>
int main(){
    double sal;
    scanf("%lf",&sal);

    double rr1 = (sal*15)/100;
    double rr2 = (sal*12)/100;
    double rr3 = (sal*10)/100;
    double rr4 = (sal*7)/100;
    double rr5 = (sal*4)/100;

    if(sal>=0 && sal<=400){
        printf("Novo salario: %.2lf\n",sal+rr1);
        printf("Reajuste ganho: %.2lf\n",rr1);
        printf("Em percentual: 15 %%\n");

    }else if(sal>400.01 && sal<=800){
        printf("Novo salario: %.2lf\n",sal+rr2);
        printf("Reajuste ganho: %.2lf\n",rr2);
        printf("Em percentual: 12 %%\n");
    }else if(sal>800 && sal<=1200){
        printf("Novo salario: %.2lf\n",sal+rr3);
        printf("Reajuste ganho: %.2lf\n",rr3);
        printf("Em percentual: 10 %%\n");
    }else if(sal>1200 && sal<=2000){
        printf("Novo salario: %.2lf\n",sal+rr4);
        printf("Reajuste ganho: %.2lf\n",rr4);
        printf("Em percentual: 7 %%\n");
    }else{
        printf("Novo salario: %.2lf\n",sal+rr5);
        printf("Reajuste ganho: %.2lf\n",rr5);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
