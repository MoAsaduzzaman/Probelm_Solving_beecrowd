//Problem no-1164
//https://www.beecrowd.com.br/judge/en/problems/view/1164

#include <stdio.h>
int main()
{
    int N, X, a, b, c, d=0;
    scanf("%d", &N);
    for(a=1; a<=N; a++)
    {
        scanf("%d", &X);
        c=X/2; d=0;
        for(b=1; b<=c; b++)
        {
            if(X%b==0)
                d+=b;
        }
        if(d==X)
            printf("%d eh perfeito\n",X);
        else
            printf("%d nao eh perfeito\n",X);
    }
    return 0;
}