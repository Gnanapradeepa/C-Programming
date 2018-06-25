#include <stdio.h>
#include<string.h>
int main(void) {
	char str1[10],str2[20];
	int i,j;
	gets(str1);
	gets(str2);
	i=strlen(str1);
	for(j=0;str2[j]!='\0';i++,j++)
	{
		s1[i]=s2[j];	
	}
	s1[i]='\0';
	puts(s1);
	return 0;
}
