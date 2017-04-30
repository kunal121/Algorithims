#include<stdio.h>
int main()
{
    int n,a[100],temp,i,j;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the sorted numbers are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
