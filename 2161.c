//Problem no-2161
//https://www.beecrowd.com.br/judge/en/problems/view/2161

#include<stdio.h>
int main(){
    double n,ans=0.0;
    scanf("%lf",&n);
    while(n--){
        ans+=6.0;
        ans=1.0/ans; 
    }
    ans+=3.0;
    printf("%.10lf\n",ans);
    
    return 0;
}
