#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int i,j,a[100],k,n,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
					a[n-1]='\0';
					n=n-1;
					
					
				}
				printf("%d",a[i]);
				exit(0);
				c++;
			
			}
		}
		
	}
	if(c==0)
	{
		printf("\nunique");
	}
	
	
	return 0;
}
