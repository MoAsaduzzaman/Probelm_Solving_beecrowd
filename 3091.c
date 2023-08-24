//Problem no-3091
//https://www.beecrowd.com.br/judge/en/problems/view/3091

#include <stdio.h>
int main(){
 
   int a, b, div;
   
   scanf("%d", &a);
   scanf("%d", &b);
   
   div = a % b;

   printf("%d\n", div);
 
   return 0;
}
