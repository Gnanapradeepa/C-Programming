#include<stdio.h>
int main(void){
    int sum=0,n,i;
    int a[30];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&a[i]);
    	sum=sum+a[i];
    }
  printf("%d",sum);
    return 0;
}
