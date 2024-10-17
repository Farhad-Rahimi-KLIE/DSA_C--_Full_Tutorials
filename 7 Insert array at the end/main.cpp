#include <iostream>

using namespace std;

int main()
{
    int arr[10], n, x, i;
    cout << "Enter the Size of array" << endl;
    cin >> n;
    cout << "Enter the array element" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "insert element at the end of array" << endl;
    cin>>x;
    arr[i]= x;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}