//Problem no-3076
//https://www.beecrowd.com.br/judge/en/problems/view/3076

#include<stdio.h>
#include<math.h>
int main(){
    unsigned long long int N;
    while(~scanf("%llu",&N))
        printf("%.lf\n",ceil(N/100.0));
    return 0;
}
