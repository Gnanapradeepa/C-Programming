#include<stdio.h>
int main(void)
{
	int i,j,x=0,sum=0,n;
	scanf("%d",&n);
	if(n==1)
	{
		printf("1");
	}
	else
	{
	sum=1;
	for(i=2;i<=n;i++)
	{
		x=i;
		for(j=0;j<i-1;j++)
		{
			x=x*i;
		}
		sum=sum+x;
		
	}
	printf("%d",sum);
}
	return 0;
}
