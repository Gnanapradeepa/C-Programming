#include <stdio.h>
int main(void) 
{
	int base=2,exp,power=1,i,a;
	scanf("%d\n",&a);
	scanf("%d\n",&exp);
	for(i=1;i<=exp;i++)
	{
		power*=base;
	
	if(power>a)
	printf("false");
	else if(power==a)
	{
	printf("true");
	break;
	}
	}
	return 0;
}
