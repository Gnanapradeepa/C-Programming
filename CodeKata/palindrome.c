#include <stdio.h>

int main(void) {
	int n,n1,rev=0,i;
	scanf("%d",&n1);
	n=n1;
	while(n!=0)
	{
		i=n%10;
		rev=rev*10+i;
		n/=10;
	}
	printf("%d",rev);
	if(rev==n1)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	return 0;
}
