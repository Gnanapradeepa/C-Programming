#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,c=0,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			c++;
		}
	}
	printf("%d",c);
	
}
