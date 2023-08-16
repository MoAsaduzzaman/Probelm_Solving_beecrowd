//Problem no-1080
//https://www.beecrowd.com.br/judge/en/problems/view/1080

#include<stdio.h>
int main(){
    int arr[100],j,p;
    for(int i=0; i<100; i++){
        scanf("%d\n",&arr[i]);    
    }
    for(int i=0; i<100; i++){
        if(arr[i]>j){
            j=arr[i];
            p=i+1;
        }
    }
    printf("%d\n",j);
    printf("%d\n",p);

    return 0;
}
