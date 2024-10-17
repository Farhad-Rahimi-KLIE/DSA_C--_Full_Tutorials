#include<iostream>

using namespace std;

int main()
{
    int marks[5] = {4,8,9,2,5};
    // Array Traversing
    for (int i = 0; i < 5; i++)
    {
        cout<<"Index :"<<i<<" "<< "Value :"<<marks[i]<<endl;
    }
    
    return 0;
}