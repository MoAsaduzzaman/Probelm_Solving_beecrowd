//Problem no-3303
//https://www.beecrowd.com.br/judge/en/problems/view/3303

#include <stdio.h>
#include<string.h>
int main() {

    char a[20];
    scanf("%s", &a);
    if(strlen(a) >= 10){
        printf("palavrao\n");
    }else{
        printf("palavrinha\n");
    }
    return 0;
}