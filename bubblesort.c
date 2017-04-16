#include<stdio.h>
void main()
{
    int a[100],l,k,i,j,flag=0;
    printf("Enter limit");
    scanf("%d",&l);
    printf("Enter some no");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<l-1;i++)
{
    for(j=0;j<l-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            k=a[j+1];
            a[j+1]=a[j];
            a[j]=k;
        }
    }
}
printf("Sorted array is:");
for(i=0;i<l;i++)
{
    printf(" %d ",a[i]);
}
}
