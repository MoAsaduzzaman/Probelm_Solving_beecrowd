//Problem no-2166
//https://www.beecrowd.com.br/judge/en/problems/view/2166

#include<stdio.h>
int main(){
    double n,ans=0.0;
    scanf("%lf",&n);
    while(n--){
        ans+=2.0;
        ans=1.0/ans;
    }
    ans+=1.0;
    printf("%.10lf\n",ans);
    
    return 0;
}