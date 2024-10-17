#include<iostream>

using namespace std;

int array[5] = {4,6,7,3,1}, n = 5;
void BubbleSort(){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    
}

void Print(){
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }
    
}

int main()
{
    cout<<"Before Sorting array element are :"<<endl;
    Print();
    BubbleSort();
    cout<<"After sorting array element are : "<<endl;
    Print();
    return 0;
}