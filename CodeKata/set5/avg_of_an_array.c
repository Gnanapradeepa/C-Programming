#include <stdio.h>

int main(void) 
{
	int i,n,arr[50],sum=0,avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/n;
	printf("%d",avg);
	return 0;
}
