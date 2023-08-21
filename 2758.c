//Problem no-2758
//https://www.beecrowd.com.br/judge/en/problems/view/2758

#include<stdio.h>
int main(){
    float A,B; double C,D; int m1,m2,m3,m4;

    
        scanf("%f%f",&A,&B);
        scanf("%lf%lf",&C,&D);

        printf("A = %f, B = %f\n",A,B);
        printf("C = %lf, D = %lf\n",C,D);
        printf("A = %.1f, B = %.1f\n",A,B);
        printf("C = %.1lf, D = %.1lf\n",C,D);
        printf("A = %.2f, B = %.2f\n",A,B);
        printf("C = %.2lf, D = %.2lf\n",C,D);
        printf("A = %.3f, B = %.3f\n",A,B);
        printf("C = %.3lf, D = %.3lf\n",C,D);
        printf("A = %.3E, B = %.3E\n",A,B);
        printf("C = %.3E, D = %.3E\n",C,D);
        printf("A = %0.lf, B = %0.lf\n",A,B);
        printf("C = %0.lf, D = %0.lf\n",C,D);
    

    return 0;
}
