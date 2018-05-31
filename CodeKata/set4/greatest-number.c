#include<stdio.h>
int main()
{
	int a[100],n,i,g=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>g)
		{
			g=a[i];
		}
	}
	printf("%d",g);
}
