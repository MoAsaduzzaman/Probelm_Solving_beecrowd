//Problem no-1156
//https://www.beecrowd.com.br/judge/en/problems/view/1156

#include <stdio.h>
int main()
{
    double x,y,z=1, sum=0;
    for(x=1; x<=39; x+=2)
    {
        y=x/z;
        sum+=y;
        z*=2;
    }
    printf("%.2lf\n",sum);
    return 0;
}