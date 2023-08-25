//Problem no-3040
//https://www.beecrowd.com.br/judge/en/problems/view/3040

#include<stdio.h>
int main(){
    int N,i,tall,thickness,branches;
    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%d %d %d",&tall,&thickness,&branches);

        if(tall>=200 && tall<=300){
            if(thickness>=50){
                if(branches>=150){
                    printf("Sim\n");
                }else{
                    printf("Nao\n");
                }
            }else{
                printf("Nao\n");
            }
        }else{
            printf("Nao\n");
        }
    }

    return 0;
}
