#include<iostream>

using namespace std;
//                i     j
int array[5] = {9,4,7,1,5}, n = 5;
// 4, 9, 7, 1, 5
// 4, 1, 7, 9, 5

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int Partition(int low, int high){
    int Pivot = array[high]; // 5
    int i = (low-1); // -1
    for (int j = low; j < high; j++)
    {
       if (array[j] <= Pivot)
       {
        i++;
        Swap(array[i], array[j]);
       }
       
    }     
    //     pivot
    // 4, 1, 5, 9, 7
    Swap(array[i+1], array[high]);
    return (i+1);

}

void QuickSort(int low, int high){
    if (low < high)
    {
        int pivot = Partition(low, high); // 5
        QuickSort(low, pivot-1);
        QuickSort(pivot+1, high);
    }
    
}

void Print(){
    cout<<"All Array elements is Here: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }
    
}

int main()
{
    cout<<"Before Merge Sort"<<endl;
    Print();
    QuickSort(0, n-1);
    cout<<"After merge Sort"<<endl;
    Print();
    return 0;   
}