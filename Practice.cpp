#include<iostream>

using namespace std;
int array[5] = {5,2,3,1,4}, n = 5;

void Merge(int left, int Medium, int right){
    
}

void MergeSort(int l, int r){
    if (l < r)
    {
        int middle = (l+r)/2;
        MergeSort(l, middle);
        MergeSort(middle+1, r);
        Merge(l, middle, r);
    }
    
}

void Print(){
    cout<<"Sorted Element is This: "<<endl;
    for (int i = 0; i < n; i++)
    {
            cout<<array[i]<<endl;
    }
    
}
int main()
{
    cout<<"Unsorted Array: "<<endl;
    Print();
    cout<<endl;
    MergeSort(0, n-1);
    Print();
    return 0;   
}