#include<stdio.h>
int main()
{
  int a[10]={10,20,30,40,50};
  int n=5;

  printf("original array:");
  for(int i=0;i<n;i++)
  {
      printf("%d",a[i]);
  }
   printf("\n\n");
  // Array insetion

   int pos=2;
   int val=24;

   for(int i=n-1;i>=pos;i--)
   {
       a[i+1]=a[i];
   }
   a[pos]=val;
   n++;

   printf("Array after inserting %d at index %d:",val,pos);

   for(int i=0;i<n;i++)
   {
       printf("%d",a[i]);
   }
   printf("\n\n");
   //array deletion

   int del_pos=3;

   for(int i=del_pos;i<n;i++)
   {
            a[i]=a[i+1];
   }
     n--;
      printf("array after deleting element at index %d:",del_pos);

      for(int i=0;i<n;i++)
      {
          printf("%d",a[i]);
      }
        printf("\n\n");
        return 0;




}

