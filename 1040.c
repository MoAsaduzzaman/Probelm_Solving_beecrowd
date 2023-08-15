//Problem no-1040
//https://www.beecrowd.com.br/judge/en/problems/view/1040

#include<stdio.h>
int main(){

    double N1,N2,N3,N4;
    scanf("%lf %lf %lf %lf",&N1, &N2,&N3,&N4);

 

    double avg = (N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1lf\n",avg);

    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    if(avg<5.0){
        printf("Aluno reprovado.\n");
    }
    if(avg>=5.0 && avg <=6.9){
        printf("Aluno em exame.\n");
    
    double N5;
    scanf("%lf",&N5);

    printf("Nota do exame: %.1lf\n",N5);

    double avg2 = (avg+N5)/2;

    if(avg2>=5.0){
        printf("Aluno aprovado.\n");
    }
    if(avg2<=4.9){
        printf("Aluno reprovado.\n");
    }

    printf("Media final: %.1lf\n",avg2);
    }

    return 0;
}
