#include<stdio.h>
int main()
{
    int j,i,n,m;
    printf("Enter the size of two arrays:\n");
    scanf("%d%d",&n,&m);
    int a[n],b[m],c[m+n];
    printf("Enter elements of first array:\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements of second array:\n");
    for(i=0;i<=m-1;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        c[i]=a[i];
    }
    for(i=0,j=n;j<m+n && i<m;i++,j++)
    {
        c[j]=b[i];
    }
    printf("After merging the array:\n");
    for(i=0;i<=m+n-1;i++)
    {
        printf("%d ",c[i]);
    }
}