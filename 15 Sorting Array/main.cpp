#include<iostream>

using namespace std;

int main()
{
    int arr[10], size;
    cout << "Enter the Size of array" << endl;
    cin >> size;
    cout << "Enter the array element in ascending order" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    cout<<"Sorted array is "<<endl;
    for (int i = 0; i < size; i++)
    {
            cout<<arr[i];
    }
    
    

    return 0;
}