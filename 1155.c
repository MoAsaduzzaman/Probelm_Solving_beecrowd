//Problem no-1155
//https://www.beecrowd.com.br/judge/en/problems/view/1155

#include <stdio.h>
int main()
{
    double x,y, sum=0;
    for(x=1; x<=100; x++)
    {
        y=1/x;
        sum+=y;
    }
    printf("%.2lf\n",sum);
    return 0;
}