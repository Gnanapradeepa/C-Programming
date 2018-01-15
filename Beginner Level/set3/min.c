#include<stdio.h>
int main(void)
{
	int n,a[100],i,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=1;i<n;i++)
	{
		if(l>a[i])
		{
			l=a[i];
		}
		
	}
	printf("%d",l);
	return 0;
}
