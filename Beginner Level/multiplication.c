#include<stdio.h>
int main(void)
{
	int n,i,l,c=0;
	scanf("%d",&n);
	scanf("%d",&l);
	for(i=1;i<n;i++)
	{
		c=l*i;
		printf("%d * %d= %d\n",l,i,c);
	}
	
	return 0;
}
