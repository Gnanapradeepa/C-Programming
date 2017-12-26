#include <stdio.h>

int main(void) {
	int i,j,c=0,l;
	char a[100];
	int b[10];
	gets(a);
	puts(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		b[i]=1;
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
			  b[i]++;
			  a[j]=a[j+1];
			  l--;
			  
			}
		}
			printf("%c=%d\n",a[i],b[i]);
	}

	return 0;
}
