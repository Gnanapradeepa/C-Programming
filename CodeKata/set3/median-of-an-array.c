#include<stdio.h>
int main(void)
{
	int a[100],n,i,j,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	j=sum/n;
	printf("%d",j);
}
	
	
