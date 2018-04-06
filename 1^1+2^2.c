#include<stdio.h>
int main(void)
{
	int i,j,x=0,sum=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=i;
		for(j=0;j<i;j++)
		{
			x=x*i;
		}
		sum=sum+x;
		
	}
	printf("%d",sum);
	return 0;
}
