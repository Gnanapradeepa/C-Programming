#include <stdio.h>

int main(void) {
	int a[10],i,n,ch,b;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b=a[i];
	for(i=0;i<n;i=i+a[i])
	{
		ch=a[i+a[i]];
	}
	if (ch==b)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
