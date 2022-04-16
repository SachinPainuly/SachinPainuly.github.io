#include<stdio.h>
int add(int);
int main()
{
    int n,a;
    printf("Enter a five digit number:\n");
    scanf("%d",&n);
    a=add(n);
    printf("%d",a);
    return 0;
}
int add(int x)
{
    int r,b;
    if(x!=0)
  {
      r=x%10;
      b=r+add(x/10);
  }
  else{
      return 0;
  }
    return b;
}