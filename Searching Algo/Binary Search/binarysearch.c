#include<stdio.h>
#include<math.h>
int binarysearch(int l,int a[],int r,int value)
{
    int mid;
    if(r>l)
    {
        mid=floor((l+r)/2);
        if(a[mid]==value)
        return -1;
        if(a[mid]>value)
        return binarysearch(l,a,mid,value);
        if(a[mid]<value)
        return binarysearch(mid,a,r,value);
    }
}
int main()
{
    int arr[102],i,x,size,result;
    printf("please enter the size");
    scanf("%d",&size);
    printf("Enter the array");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Enter the Value");
    scanf("%d",&x);
    result=binarysearch(0,arr,size,x);
    if(result==-1)
    printf("Value Found");
    else
    printf("Value Not Found");

}
