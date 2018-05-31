#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,k,digit,sum=0,i,n;
	scanf("%d %d",&a,&b);
	
	for(i=a;i<=b;i++)
	{
		digit=0;
		k=i;
		while(k!=0)
		{
			k=k/10;
			digit++;
		}
		k=i;
		while(k!=0)
		{
			n=k%10;
			k=k/10;
			sum=sum+pow(n,digit);
		}
		if(sum==i)
		{
		printf("%d\t",i);
		}
		sum=0;
	}
}
