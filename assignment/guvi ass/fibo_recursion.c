#include <stdio.h>

int fibo(int);
int main(void)
{
		int num,res;
		scanf("%d",&num);
		if(num<0)
		{
			printf("negative num is not possible\n");
		}
		else
		{
			 res = fibo(num);
             printf(" %d\n", res);
		}
	return 0;
}
int fibo(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return(fibo(num-1)+fibo(num-2));
	}
}
