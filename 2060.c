//Problem no-2060
//https://www.beecrowd.com.br/judge/en/problems/view/2060

#include<stdio.h>
int main(){
    int N,i,X,a=0,b=0,c=0,d=0;
    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%d",&X);
        if(X%2==0){
            a++;
        }
        if(X%3==0){
            b++;
        }
        if(X%4==0){
            c++;
        }
        if(X%5==0){
            d++;
        }
    }
    printf("%d Multiplo(s) de 2\n",a);
    printf("%d Multiplo(s) de 3\n",b);
    printf("%d Multiplo(s) de 4\n",c);
    printf("%d Multiplo(s) de 5\n",d);

    return 0;
}

