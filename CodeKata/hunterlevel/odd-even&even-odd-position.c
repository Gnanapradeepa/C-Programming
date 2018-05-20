#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,n,a[30],b,c=0,k;
	scanf("%d",&n);
	for (i = 0; i < n; i++) 
        {
		scanf("%d",&a[i]);
        }
        for (i = 0; i < n; i++) 
        {
        	if(i%2==0&&a[i]%2==1)
        	{
        		printf("%d",a[i]);
        	}
        	if(i%2==1&&a[i]%2==0)
        	{
        		printf("%d",a[i]);
        	}
        }
        	
        
            
      
	return 0;
}
	
