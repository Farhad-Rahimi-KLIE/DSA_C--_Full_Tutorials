#include <iostream>

using namespace std;

int main()
{
    int arr[10], n, x, i;
    cout << "Enter the Size of array" << endl;
    cin >> n;
    cout << "Enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to Search from Array" << endl;
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}