#include<stdio.h>
int fact(int);
int main()
{
    int n,a;
    printf("Enter a number:\n");
    scanf("%d",&n);
    a=fact(n);
    printf("%d",a);
}
int fact(int x)
{
    int b;
   if(x==1)
   {
       return 1;
   }
   else
   {
     b=x*fact(x-1);
     return b;
   }
}