#include<iostream>

using namespace std;

int main()
{
    int arr[10], n, x;
    cout<<"Enter the Size of Array"<<endl;
    cin>>n;
    cout<<"Enter the Array Element"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    cout<<"Enter the Element at the Beginning"<<endl;
    cin>>x;
    for (int i=n; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = x;
    n++;
    cout<<"Array element are :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}