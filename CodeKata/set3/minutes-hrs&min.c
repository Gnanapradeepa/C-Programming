#include <stdio.h>

int main(void) {
	int i,a,b;

	scanf("%d",&i);
	a=i/60;
	b=i%60;
	printf("%d:%d",a,b);
	return 0;
}
