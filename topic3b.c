#include<stdio.h>

int main(void){
  int x, i;
  for(i=0;i<10000;i++){
    scanf("%d",&x);
    printf("Case %d: %d\n",i+1,x);
    if(x == 0) break;
  }
  return 0;
}

    
