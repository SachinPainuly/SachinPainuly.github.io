#include<stdio.h>
int main()
{
    int min,max,n,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    max=min=a[0];
    for(i=1;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("Maximum element is %d. \n",max);
    /*for(i=0;i<=n-1;i++)
    {
        if(min>a[i]);
        {
            min=a[i];
        }
    }*/
    printf("Minimum element is %d. ",min);
}    