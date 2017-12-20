#include <stdio.h>
void twoRotate(int arr[], int n);
void Rotate(int arr[], int k, int n)
{
  int i;
  for (i = 0; i < k; i++)
    twoRotate(arr, n);
}
 
void twoRotate(int arr[], int n)
{
  int i, temp;
  temp = arr[0];
  for (i = 0; i < n-1; i++)
  {
     arr[i] = arr[i+1];
  }
  arr[i] = temp;
}
 
void print(int arr[], int size)
{
  int i;
  for(i = 0; i < size; i++)
    printf("%d ", arr[i]);
}
int main()
{
   int arr[] = {10,20,30,40,50};
   Rotate(arr, 2, 5);
   print(arr, 5);
   return 0;
}
