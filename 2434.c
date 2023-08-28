//Problem no-2434
//https://www.beecrowd.com.br/judge/en/problems/view/2434

#include <stdio.h>
int main (){
	int a, i;
	int b, c, d;
	int saldoAtual = 0;

	scanf("%d %d", &a, &b);
	c = b;

	for (i = 0; i < a; i++){
		scanf("%d", &d);
		b += d;

		if (b < c)
			c = b;
	}
	printf("%d\n", c);

    return 0;
}
