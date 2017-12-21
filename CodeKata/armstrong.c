#include <stdio.h>
int main(void) {
	int n,n1,rem,r=0;
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		rem=n1%10;
		r=r+rem*rem*rem;
		n1/=10;
	}
	if(r==n)
	{
		printf("armstrong");
	}
	else
	{
		printf("not a armstrong");
	}
	return 0;
}
