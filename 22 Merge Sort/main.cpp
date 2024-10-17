#include<iostream>

using namespace std;

int array[5] = {4, 6, 7, 3, 1}, n = 5;
void merge(int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int array1[n1], array2[n2];
    for (int i = 0; i < n1; i++)
    {
       array1[i] = array[p+i];
    }

     for (int j = 0; j < n2; j++)
    {
       array2[j] = array[q+1+j];
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    while (i<n1 && j<n2)
    {
        if (array1[i] <= array2[j])
        {
            array[k] = array1[i];
            i++;
        }else{
            array[k] = array2[j];
            j++;
        }
        k++;
        
    }

    while (i<n1)
    {
       array[k] = array1[i];
       i++;
       k++;
    }
    
     while (j<n2)
    {
       array[k] = array2[j];
       j++;
       k++;
    }
    
    
}

void MergeSort(int l, int r){
    if (l<r)
    {
        int m = (l+r)/2;
        MergeSort(l,m);
        MergeSort(m+1, r);
        merge(l, m, r);
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
    MergeSort(0,n-1);
    cout << "After sorting array element are : " << endl;
    Print();
    return 0;
}