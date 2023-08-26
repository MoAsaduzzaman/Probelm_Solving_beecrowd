//Problem no-2582
//https://www.beecrowd.com.br/judge/en/problems/view/2582

#include<stdio.h>
int main(){
    int C,X,Y,SUM;
    scanf("%d",&C);

    for(int i =0; i<C; i++){
        scanf("%d %d",&X,&Y);
        SUM=X+Y;

        if(SUM==0) printf("PROXYCITY\n");
        if(SUM==1) printf("P.Y.N.G.\n");
        if(SUM==2) printf("DNSUEY!\n");
        if(SUM==3) printf("SERVERS\n");
        if(SUM==4) printf("HOST!\n");
        if(SUM==5) printf("CRIPTONIZE\n");
        if(SUM==6) printf("OFFLINE DAY\n");
        if(SUM==7) printf("SALT\n");
        if(SUM==8) printf("ANSWER!\n");
        if(SUM==9) printf("RAR?\n");
        if(SUM==10) printf("WIFI ANTENNAS\n");
    }

    return 0;
}
