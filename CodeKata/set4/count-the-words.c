#include<stdio.h>
#include<string.h>
int main(void)
{
int count=0,i,l;
char str[20];
scanf("%[^\n]s",str);
l=strlen(str);
for(i=0;i<=l;i++)
{
if(string[i]==' ')
{
count++;
}
}
printf("%d",count+1);
}
