//Problem no-1051
//https://www.beecrowd.com.br/judge/en/problems/view/1051

#include<stdio.h>
int main(){
    double sal;
    scanf("%lf",&sal);

    if(sal>=0.00 && sal<=2000.00){
        printf("Isento\n");
    }
    if(sal>2000.00 && sal<=3000.00){
        printf("R$ %.2lf\n", ((sal-2000.00)*8)/100);
    }
    if(sal>3000.00 && sal<=4500.00){
        printf("R$ %.2lf\n", (((1000.00*8)/100)+(((sal-3000.00)*18)/100)));
    }
    if (sal>4500.00){
        printf("R$ %.2lf\n", (((1000.00*8)/100)+((1500.00*18)/100)+(((sal-4500.00)*28)/100)));
    }

    return 0;
}
