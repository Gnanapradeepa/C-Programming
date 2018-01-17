#include <stdio.h>
int main(void) {
	int i,a[100],n,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	  	printf("(%d,%d)",a[i],a[j]);
	  }
	}
	
	return 0;
}
