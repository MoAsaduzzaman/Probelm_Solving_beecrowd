//Problem no-1174
//https://www.beecrowd.com.br/judge/en/problems/view/1174

#include<stdio.h>
int main(){
    float a[100];
    int i;

    for(i=0; i<100; i++){
        scanf("%f",&a[i]);
    }

    for(i=0; i<100; i++){
        if(a[i]<=10.0){
        printf("A[%d] = %.1f\n",i,a[i]);
        }
    }

    return 0;
}
