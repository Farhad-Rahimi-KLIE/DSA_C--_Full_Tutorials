#include<iostream>

using namespace std;

int main()
{
    int arr[10], n, pos, x;
    cout<<"Enter the Size of array"<<endl;
    cin>>n;
    cout<<"Enter the array element"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Insertion Location"<<endl;
    cin>>pos;
    cout<<"Enter the value you insert"<<endl;
    cin>>x;
    for (int i = n-1; i >= pos -1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = x;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    
    return 0;
}