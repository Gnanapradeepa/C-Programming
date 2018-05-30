//median of an array
#include<stdio.h>
int main()
{
   int n,a[100],i,temp,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=1;i<=n;i++)
   {
      for(j=i+1;j<=n;j++)
      {
        if(a[i]>=a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
            
        }
      }

   }
     
     printf(" %d\t",a[i/2]);
}
