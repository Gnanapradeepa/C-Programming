#include<stdio.h>
int main(void)
{
	int n,i,sum=0,a,d,l;
	scanf("%d %d %d",&n,&a,&d);
	l=a;
	for(i=0;i<n;i++)
	{
		sum=sum+l;
		l=l+d;	
	}
	
	printf("%d",sum);
}
