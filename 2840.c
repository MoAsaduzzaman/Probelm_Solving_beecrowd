//Problem no-2840
//https://www.beecrowd.com.br/judge/en/problems/view/2840

#include<stdio.h>
#include<math.h>
int main(){
    int R,L;
    double ans;
    int ans2;

    scanf("%d %d",&R,&L);

    ans=(4.00/3.00)*(3.1415*pow(R,3));
    ans2=L/ans;

    printf("%d\n",ans2);

    return 0;
}
