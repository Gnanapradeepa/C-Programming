#include <stdio.h>
#include<string.h>
int main()
{
	int a,b,t;
	scanf("%d\t%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("%d\t%d",a,b);
}
