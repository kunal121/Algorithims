#include<iostream>
#include<math.h>
using namespace std;
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
    cout<<"please enter the size";
    cin>>size;
    cout<<"Enter the array";
    for(i=0;i<size;i++)
    cin>>arr[i];
    cout<<"Enter the Value";
    cin>>x;
    result=binarysearch(0,arr,size,x);
    if(result==-1)
    cout<<"Value Found";
    else
    cout<<"Value Not Found";

}

