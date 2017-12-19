#include <stdio.h>
int main(void) 
{
	int base,exp,power=1,i;
	scanf("%d\n",&base);
	scanf("%d\n",&exp);
	for(i=1;i<=exp;i++)
	{
		power*=base;
	}
	printf("%d",power);
	return 0;
}
