//Problem no-1011
//https://www.beecrowd.com.br/judge/en/problems/view/1011

#include<stdio.h>
int main(){
    int R;
    double val;

    scanf("%d",&R);
    val = ((4/3.0) * 3.14159 * R * R * R);

    printf("VOLUME = %.3lf\n",val);

    return 0;
}
