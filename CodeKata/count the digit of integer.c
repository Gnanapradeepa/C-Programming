#include<stdio.h>
int main(void) {
	int n,t,i,b=0;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		i=t/10;
		++b;
		t=i;
		
	}
	printf("%d",b);
	return 0;
}
