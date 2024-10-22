#include<iostream>

using namespace std;

int array[5] = {4, 6, 7, 3, 1}, n = 5;

void Swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int low, int high){
    // Selecting last element as the pivot
    int pivot = array[high];
    // Index of elemment just before the last element
    // It is used for swapping
    int i = (low -1); // -1
    for (int j = low; j < high; j++)
    {
        // If current element is smaller than or
        // equal to pivot
       if (array[j] <= pivot)
       {
        i++;
        Swap(&array[i], &array[j]);
       }
       
    }
     // Put pivot to its position
    Swap(&array[i+1], &array[high]);
     // Return the point of partition
    return (i+1);
    
}

void QuickSort(int low, int high){
     // Base case: This part will be executed till the starting
    // index low is lesser than the ending index high
    if (low < high)
    {
        // pi is Partitioning Index, arr[p] is now at
        // right place
        int pi = Partition(low, high);
        // Separately sort elements before and after the
        // Partition Index pi
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