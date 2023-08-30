//Problem no-1555
//https://www.beecrowd.com.br/judge/en/problems/view/1555

#include<stdio.h>
int main(){
    int N,i,x,y,a,b,c;
    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%d %d",&x,&y);

        a= ((3*x)*(3*x))+(y*y);
        b = (2*(x*x))+ ((5*y)*(5*y));
        c = (-100*x)+(y*y*y);

        if(a>b && a>c){
            printf("Rafael ganhou\n");
        }
        if(b>a && b>c){
            printf("Beto ganhou\n");
        }
        if(c>a && c>b){
            printf("Carlos ganhou\n");
        }

        a=0;
        b=0;
        c=0;
    }
    return 0;
}
