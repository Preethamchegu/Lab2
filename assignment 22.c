#include<stdio.h>

int main()
{
  int n,f=1;
  
  printf("enter a number=");
  scanf("%d",&n);
  while ( n!=0)
  { f=f*n;
    n=n-1;
   }
   printf("%d",f);
   
}