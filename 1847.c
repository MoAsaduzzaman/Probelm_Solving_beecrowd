//Problem no-1847
//https://www.beecrowd.com.br/judge/en/problems/view/1847

#include<stdio.h>
int main(){
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);

    if(b>a&&c<=b)
             printf(":(\n");
       else if(b>a&&c>b&&(c-b)<(b-a))
             printf(":(\n");
       else if(b>a&&c>b&&(c-b)>=(b-a))
              printf(":)\n");
      else if(b<a&&c<b&&(b-c)<(a-b))
              printf(":)\n");
      else if(b<a&&c<b&&(b-c)>=(a-b))
              printf(":(\n");
      else if((a==b)&&c>b)
              printf(":)\n");
       else if((a==b)&&c<b)
              printf(":(\n");
       else if(b<a&&c>=b)
             printf(":)\n");
       else
             printf(":(\n");

    return 0;
}
