//Problem no-1837
//https://www.beecrowd.com.br/judge/en/problems/view/1837

#include<stdio.h>
int main(){
    int a,b,c,d,q,r;

    scanf("%d %d",&a,&b);
    if(a<0){
        c=b;
        if(b<0) c=b*(-1);
        for(r=0; r<c; r++){
            d=a-r;
            if(d%b==0) break;
        }
        q=d/b;
    }else{
        q=a/b;
        r=a%b;
    }
    printf("%d %d\n",q,r);

    return 0;
}
