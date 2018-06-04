#include<stdio.h>
int main(void)
{
	int a[100],b[100];
	int n,m,c=0,i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				a[i]=-1;
				c++;
			}
		}
	}
	if(c==m)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
}
