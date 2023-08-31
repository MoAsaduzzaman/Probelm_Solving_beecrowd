//Problem no-1012
//https://www.beecrowd.com.br/judge/en/problems/view/1012

#include<stdio.h>
int main(){
    double A,B,C;

    scanf("%lf %lf %lf", &A, &B, &C);

    double triang = (0.5 * A * C);
    double rad = (3.14159 * C * C);
    double trap = (((A+B)/2) * C);
    double sqr = (B * B);
    double rectang = (A * B);

    printf("TRIANGULO: %.3lf\n",triang);
    printf("CIRCULO: %.3lf\n",rad);
    printf("TRAPEZIO: %.3lf\n",trap);
    printf("QUADRADO: %.3lf\n",sqr);
    printf("RETANGULO: %.3lf\n",rectang);

    return 0; 
}