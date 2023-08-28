//Problem no-2160
//https://www.beecrowd.com.br/judge/en/problems/view/2160

#include<stdio.h>
#include<string.h>
int main(){
    char L[502];
    int length;

    gets(L);
    length=strlen(L);

    if(length<=80){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}
