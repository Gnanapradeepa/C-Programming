#include <stdio.h>
int main(void) {
	char n;
	printf("enter the choice\n");
	scanf("%c",&n);
	if(n=='a'||n=='e'||n=='o'||n=='i'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
	{
		printf("vowel");
	}
	else
	{
		printf("consonent");
	}
	return 0;
}
