//Problem no-1145
//https://www.beecrowd.com.br/judge/en/problems/view/1145

#include <stdio.h>
int main()
{
    int X,Y,a,b=0;
    scanf("%d%d", &X,&Y);
    for(a=1; a<=Y; a++)
    {
        b++;
        if(b==X) printf("%d",a);
        else printf("%d ", a);
        if(b==X)
        {
            b=0;
            printf("\n");
        }
    }
    return 0;
}
