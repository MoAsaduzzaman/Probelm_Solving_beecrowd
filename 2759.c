//Problem no-2759
//https://www.beecrowd.com.br/judge/en/problems/view/2759

#include<stdio.h>
int main(){
    char a,b,c;
    char x[3];

    scanf("%c %c %c",&a,&b,&c);

    printf("A = %c, B = %c, C = %c\n",a,b,c);
    printf("A = %c, B = %c, C = %c\n",b,c,a);
    printf("A = %c, B = %c, C = %c\n",c,a,b);

    return 0;
}
