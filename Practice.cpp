#include<iostream>

using namespace std;

int main()
{
    int arr[10], n, x;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the Array element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            } 
        }     
    }   

    for (int i = 0; i < n; i++)
    {
        cout<<"This is Sorted array: "<<endl;
        cout<<arr[i]<<endl;
    }
    
    return 0;
}