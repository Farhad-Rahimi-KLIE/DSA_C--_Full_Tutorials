#include <iostream>

using namespace std;

int array[5] = {4, 6, 7, 3, 1}, n = 5;

void InsertionSort()
{
    for (int i = 1; i < n; i++){
        int key = array[i];
        int j = i - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
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
    InsertionSort();
    cout << "After sorting array element are : " << endl;
    Print();
    return 0;
}