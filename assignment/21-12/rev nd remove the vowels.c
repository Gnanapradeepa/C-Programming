#include <stdio.h>
#include<string.h>
int main(void) {
	int i,l;
	char a[100],b[100];
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	b[l-i-1]=a[i];
	
	}
	printf("%s\n",b);
	for(i=0;i<l;i++)
	{
		if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
		{
			continue;
		}
		else
		{
			printf("%c",b[i]);
		}
	}
	return 0;
}
