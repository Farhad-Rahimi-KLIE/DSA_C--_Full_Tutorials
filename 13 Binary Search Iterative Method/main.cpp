#include <iostream>

using namespace std;
    int arr[10], n, x;

   int BinarySearch(int low, int high){
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (arr[mid] == x){
            return mid;

        }else if(arr[mid] > x){
             high = mid-1;
        }else{
            low = mid+1;
        }
        
    }
    return -1;
   }


int main()
{
    cout << "Enter the Size of array" << endl;
    cin >> n;
    cout << "Enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to Search from Array" << endl;
    cin >> x;
    int result = BinarySearch(0, n-1);
    if (result == -1)
    {
        cout<<"Element not found in array"<<endl;
    }else{
        cout<<"Element found at index :"<<result;
    }
    
    return 0;
}