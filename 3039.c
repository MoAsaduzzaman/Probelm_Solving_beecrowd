//Problem no-3039
//https://www.beecrowd.com.br/judge/en/problems/view/3039

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int toyCars = 0;
    int dolls = 0;
    
    for (int i = 0; i < N; i++) {
        char name[100];
        char gender;
        scanf("%s %c", name, &gender);
        
        if (gender == 'M') {
            toyCars++;
        } else if (gender == 'F') {
            dolls++;
        }
    }
    
    printf("%d carrinhos\n", toyCars);
    printf("%d bonecas\n", dolls);
    
    return 0;
}

