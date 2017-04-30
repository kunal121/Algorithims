#include<iostream>
using namespace std;
int main()
{
    int n,a[100],temp,i,j;
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
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
    cout<<"the sorted numbers are:";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

