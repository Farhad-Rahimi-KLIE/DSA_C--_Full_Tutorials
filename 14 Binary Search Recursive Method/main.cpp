#include <iostream>

using namespace std;
int arr[10], n, x;


   int BinarySearch(int low, int high){
    if (low > high)
    {
        return -1;
    }else{
        int mid = (low + high)/2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            BinarySearch(low, mid -1);
        }
        else
        {
            BinarySearch(mid +1, high);
        }
        
    }
    
   }

int main()
{
    cout << "Enter the Size of array" << endl;
    cin >> n;
    cout << "Enter the array element in ascending order" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to Search from Array" << endl;
    cin >> x;
    int result = BinarySearch(0, n-1);
    if (result == -1)
    {
        cout<<"Element not found :"<<endl;
    }else{
        cout<<"Element found at index :"<<result;
    }
    
    return 0;
}