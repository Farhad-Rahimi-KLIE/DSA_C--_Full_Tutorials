#include<iostream>

using namespace std;
int array[5] = {5,1,3,4,2}, n = 5;

void Merge(int left, int medium, int right){
    int size1 = medium-left+1; // 0, 1, 2 
    int size2 = right-medium; // 3, 4  
//     first subarray  second subarray
    int array1[size1], array2[size2];
    for (int i = 0; i < size1; i++)
    {
        array1[i] = array[left+i];
    }
    
    for (int j = 0; j < size2; j++)
    {
        array2[j] = array[medium+1+j];
    } 
                //      i 
    // first subarray - 5, 1, 3
    //                   j
    // second subarray - 4, 2
    int i, j, k;
    i = 0;
    j = 0;
    k = left; // main array first value k

    while (i<size1 && j<size2)
    {
        if (array1[i] <= array2[j])
        {
            array[k] = array1[i];
            i++;
        }else{
            array[k] = array2[j];
            j++;
        }  // [4,5]
        k++; 
    }

    while (i < size1)
    {
        array[k] = array1[i];
        i++;  //   k
        k++; // [4,5]
    }
    while (j < size2)
    {
        array[k] = array2[j];
        j++;  //   k
        k++; // [4,5]
    }
    
}

void MergeSort(int l, int r){
    if (l < r)
    {
        int middle = (l+r)/2;
        MergeSort(l,middle);
        MergeSort(middle+1, r);
        Merge(l,middle,r);
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
    MergeSort(0, n-1);
    cout<<"After merge Sort"<<endl;
    Print();
    return 0;   
}