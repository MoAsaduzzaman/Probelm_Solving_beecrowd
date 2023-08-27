//Problem no-2987
//https://www.beecrowd.com.br/judge/en/problems/view/2987

#include <stdio.h>
int main(){
  char ch=getchar();
  int i, k;
  for(i=0, k=65;i<26;i++,k++){
      if(ch==k){
        break;
      }
  }
  printf("%d\n",++i);
  return 0;
}
