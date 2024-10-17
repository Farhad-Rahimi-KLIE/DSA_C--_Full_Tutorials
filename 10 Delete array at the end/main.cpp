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
    n--;
    cout<<"Array after deletion"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}