//Problem no-3299
//https://www.beecrowd.com.br/judge/en/problems/view/3299

#include <stdio.h>
#include <string.h>
int main() {

    char a[100];
    scanf("%s", &a);
    char *ver = strstr(a, "13");
    if (ver){
        printf("%s es de Mala Suerte\n", a);
    }else{
        printf("%s NO es de Mala Suerte\n", a);
    }
}

