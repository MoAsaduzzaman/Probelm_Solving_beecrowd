//Problem no-1168
//https://www.beecrowd.com.br/judge/en/problems/view/1168

#include<stdio.h>
int main(){
    char a[1000];
    int N,i,j;
    long int sum;

    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%s",&a);
        j=0;
        sum=0;

        while(1){
            if(a[j]=='\0') break;
            if(a[j]=='1') sum+=2;
            if(a[j]=='2') sum+=5;
            if(a[j]=='3') sum+=5;
            if(a[j]=='4') sum+=4;
            if(a[j]=='5') sum+=5;
            if(a[j]=='6') sum+=6;
            if(a[j]=='7') sum+=3;
            if(a[j]=='8') sum+=7;
            if(a[j]=='9') sum+=6;
            if(a[j]=='0') sum+=6;
            j++;
        }
        printf("%ld leds\n",sum);

    }
    
    return 0;
}
