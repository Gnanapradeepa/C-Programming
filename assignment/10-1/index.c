#include <stdio.h>
int main()
{
    int a[100];
    int size;
    int i;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<size; i++)
    {
        if(a[i] ==i)
        {
        	printf("%d",a[i]);
        }
    }
            
                
    return 0;
}

