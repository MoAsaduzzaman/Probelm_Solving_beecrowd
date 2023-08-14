//Problem no-1036
//https://www.beecrowd.com.br/judge/en/problems/view/1036

#include<stdio.h>
#include<math.h>
int main(){
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);

    double x= ((B*B)-(4*A*C));
  
    if(x>0 && A!=0){
        double R1= (-B+ sqrt(x))/(2*A);
        double R2= (-B-sqrt(x))/(2*A);

        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }else{
        printf("Impossivel calcular\n");
    }

    return 0;
}