//Problem no-3479
//https://www.beecrowd.com.br/judge/en/problems/view/3479

#include<stdio.h>
int main(){
    int dd,mm;
    scanf("%d/%d",&dd,&mm);

        if ((mm == 3 && dd >= 21) || (mm == 4 && dd <= 20)){
            printf("aries\n");
        }else if ((mm == 4 && dd >= 21) || (mm == 5 && dd <= 20)){
            printf("touro\n");
        }else if ((mm == 5 && dd>= 21) || (mm== 6 && dd <= 20)){
            printf("gemeos\n");
        }else if ((mm == 6 && dd >= 21) || (mm == 7 && dd <= 22)){
            printf("cancer\n");
        }else if ((mm == 7 && dd >= 23) || (mm == 8 && dd <= 22)){
            printf("leao\n");
        }else if ((mm == 8 && dd >= 23) || (mm == 9 && dd <= 22)){
            printf("virgem\n");
        }else if ((mm == 9 && dd >= 23) || (mm == 10 && dd <= 22)){
            printf("libra\n");
        }else if ((mm == 10 && dd >= 23) || (mm == 11 && dd <= 21)){
            printf("escorpiao\n");
        }else if ((mm == 11 && dd >= 22) || (mm == 12 && dd <= 21)){
            printf("sagitario\n");
        }else if ((mm == 12 && dd >= 22) || (mm == 1 && dd <= 19)){
            printf("capricornio\n");
        }else if ((mm == 1 && dd >= 20) || (mm == 2 && dd <= 18)){
            printf("aquario\n");
        }else if ((mm == 2 && dd >= 19) || (mm == 3 && dd <= 20)){
            printf("peixes\n");
        }

    return 0;
}


