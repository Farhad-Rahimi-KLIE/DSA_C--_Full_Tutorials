#include<iostream>

using namespace std;

int array[5] = {4, 6, 7, 3, 1}, n = 5;

void SelectionSort()
{
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++)
        {
           if (array[j] < array[min])
           {
            min = j;
           }
           
        }
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
        
    }
}

void Print()
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
      cout << "Before Sorting array element are :" << endl;
    Print();
    SelectionSort();
    cout << "After sorting array element are : " << endl;
    Print();
    return 0;
}