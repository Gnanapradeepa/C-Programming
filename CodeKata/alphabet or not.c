#include <stdio.h>
int main(void) {
	char n;
	printf("enter the choice\n");
	scanf("%c",&n);
	printf("%d\n",n);
	if(n>65&&97||n>90&&122)
	{
		printf("alphabet");
	}
	else
	{
		printf("not an alphabet");
	}
	return 0;
}
