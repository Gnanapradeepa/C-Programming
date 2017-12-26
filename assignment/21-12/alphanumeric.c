#include <stdio.h>

int main(void) {
	char str[100];
	int i,a=0,n=0,b=-1,c;
	gets(str);
	puts(str);
	c=strlen(str);
	for(i=0;i<=c;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			a++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			n++;
		}
		else
		{
			b++;
		}
	}
		printf("alphabet:%d\n",a);
		printf("numbers:%d\n",n);
		printf("special characters%d\n",b);

	
	return 0;
}
