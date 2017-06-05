#include<iostream>
using namespace std;
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
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value";
    cin>>value;
    f=search(a,n,value);
    if(f==1)
    cout<<"FOUND";
    else
    cout<<"NOT FOUND";
}

