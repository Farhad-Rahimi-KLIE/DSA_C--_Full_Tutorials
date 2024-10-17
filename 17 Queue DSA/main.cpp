#include<iostream>

using namespace std;
int Queue[5], n = 5, front = -1, rear = -1, x;

void Insert(){
    if (rear == n-1)
    {
        cout<<"Queue is Full"<<endl;
    }else{
        if (front == -1)
        {
            front = 0;
        }
        cout<<"Insert the element in Queue";
        cin>>x;
        rear++;
        Queue[rear] = x;
        
    }
    
}

int peak(){
    if (front == -1)
    {
        cout<<"Queue is Empty"<<endl;
    }else{
        return Queue[front];
    }
    
}

void Delete(){
    if (front == -1)
    {
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Element Deleted from Queue is "<<Queue[front]<<endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }else{
            front++;
        }
        
    }
    
}

void display(){
    if (front == -1)
    {
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Queue Elemenet are"<<endl;
        for (int i = front; i <= rear; i++)
        {
            cout<<Queue[i]<<endl;
        }
        
    }
    
}

int main()
{
    Insert();
    Insert();
    Insert();
    Insert();
    // Delete();
    // Delete();
    int y = peak();
    if (y == 0)
    {
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Front element of the queue is"<<y;
    }
    display();
    
    return 0;
}