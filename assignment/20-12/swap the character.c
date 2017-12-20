#include <stdio.h>
#include<string.h>
int main(void) {
	int i,n,t;
	char a[10];
	scanf("%s",a);
	n=strlen(a);
	if(n%2==0)
	{
	for(i=0;i<n;i+=2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	printf("%c%c",a[i],a[i+1]);
	}
	}
	else
	{
	for(i=0;i<n-1;i+=2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	printf("%c%c",a[i],a[i+1]);
	printf("%c",a[n-1]);
	}
	}
	return 0;
}
