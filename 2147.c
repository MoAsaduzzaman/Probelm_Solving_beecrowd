//Problem no-2147
//https://www.beecrowd.com.br/judge/en/problems/view/2147

#include<stdio.h>
#include<string.h>
int main(){
    int N,i,b;
    char a[10000];
    scanf("%d",&N);

        while(N--){
            scanf("%s",&a);
            b=strlen(a);
            printf("%.2lf\n",b*.01);      
        }           
     
    return 0;
}
