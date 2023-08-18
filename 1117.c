//Problem no-1117
//https://www.beecrowd.com.br/judge/en/problems/view/1117

#include <stdio.h>
int main()
{
    double a,b,c=0,d=0;
    while(1){
        if(d==2){
            break;
        }
        scanf("%lf",&a);
        if(a>=0 && a<=10){
            d++;
            c+=a;
        }else{
            printf("nota invalida\n");
        }
        
    }
    double avg=c/2.00;
    printf("media = %.2lf\n",avg);

    return 0;
}