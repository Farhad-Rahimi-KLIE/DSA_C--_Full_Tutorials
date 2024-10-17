#include <iostream>

using namespace std;

int main()
{
    int arr[10], n, x;
    cout << "Enter the Size of array" << endl;
    cin >> n;
    cout << "Enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    cout<<"array after deletion"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}