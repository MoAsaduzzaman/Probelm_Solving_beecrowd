//Problem no-3170
//https://www.beecrowd.com.br/judge/en/problems/view/3170

#include <stdio.h>
int main() {
    int balls, branches;
    scanf("%d %d", &balls, &branches);

    int requiredBalls = branches / 2;
    if (branches % 2 != 0)
        requiredBalls = requiredBalls; 

    int neededBalls = requiredBalls - balls;

    if (neededBalls <= 0) {
        printf("Amelia tem todas bolinhas!\n");
    } else {
        printf("Faltam %d bolinha(s)\n", neededBalls);
    }

    return 0;
}
