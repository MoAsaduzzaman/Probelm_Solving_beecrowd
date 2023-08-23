//Problem no-3301
//https://www.beecrowd.com.br/judge/en/problems/view/3301

#include<stdio.h>
int main(){
    int i,arr[3];
    for(i=0; i<3; i++){
    scanf("%d",&arr[i]);
    }

    if(arr[0]> arr[1] && arr[0] < arr[2]){
        printf("huguinho\n");
    }else if(arr[0] < arr[1] && arr[0] > arr[2]){
        printf("huguinho\n");
    }else if(arr[1] > arr[0] && arr[1] < arr[2]){
        printf("zezinho\n");
    }else if(arr[1] < arr[0] && arr[1] > arr[2]){
        printf("zezinho\n");
    }else{
        printf("luisinho\n");
    }

    return 0;
}
