#include<iostream>

using namespace std;

int array[5] = {4, 6, 7, 3, 1}, n = 5;

void Swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int low, int high){
    int pivot = array[high];
    int i = (low -1);
    for (int j = low; j < high; j++)
    {
       if (array[j] <= pivot)
       {
        i++;
        Swap(&array[i], &array[j]);
       }
       
    }
    Swap(&array[i+1], &array[high]);
    return (i+1);
    
}

void QuickSort(int low, int high){
    if (low < high)
    {
        int pi = Partition(low, high);
        QuickSort(low, pi-1);
        QuickSort(pi+1, high);
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
    QuickSort(0,n-1);
    cout << "After sorting array element are : " << endl;
    Print();
    return 0;
}