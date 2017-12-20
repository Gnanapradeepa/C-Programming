#include <stdio.h>

int main(void) {
	int i,h1,h2,m1,m2,t1,t2,a,b;
	scanf("%d%d",&h1,&m1);
	scanf("%d%d",&h2,&m2);
	t1=h1*60+m1;
	t2=h2*60+m2;
	if(t1>t2)
	{
		i=t1-t2;
		printf("%d\n",i);
	}
	else
	{
		i=t2-t1;
		printf("%d\n",i);
	}
	a=i/60;
	b=i%60;
	printf("%d:%d",a,b);
	return 0;
}
