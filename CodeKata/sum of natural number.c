#include<stdio.h>
int main(void){
    int sum=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	sum+=i;
    }
  printf("%d",sum);
    return 0;
}
