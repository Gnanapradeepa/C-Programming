#include <stdio.h>
#include<string.h>
int main() 
{
	char s[100];
	int n,i,count=0;
	scanf(" %[^\t\n]s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	 if(s[i]>=0&s[i]<=47||s[i]>=68&&s[i]<=63||s[i]>=91&&s[i]<=96||s[i]>=124)
	 {
	     count++;
	 }
	}
	printf("%d",count);
	return 0;
}
