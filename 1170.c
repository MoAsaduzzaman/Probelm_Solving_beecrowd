//Problem no-1170
//https://www.beecrowd.com.br/judge/en/problems/view/1170

#include<stdio.h>
int main(){
    double A,div;
    int N,i,cnt=0;
    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%lf",&A);
        while(A>1){
            A/=2;
            cnt++;
        }
        printf("%d dias\n",cnt);
        cnt=0;
    }
    return 0;
}
