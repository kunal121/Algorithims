#include<stdio.h>
int search(int arr[],int size,int value)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==value)
        {
        return 1;
        }
    }
}
int main()
{
    int n,a[20],value,f,i;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value");
    scanf("%d",&value);
    f=search(a,n,value);
    if(f==1)
    printf("FOUND");
    else
    printf("NOT FOUND");
}
