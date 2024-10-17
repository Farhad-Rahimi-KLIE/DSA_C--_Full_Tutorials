#include<iostream>

using namespace std;

int stack[5], n = 5, top = -1;

void push(int x){
    if (top == n-1)
    {
        cout<<"Stack is Full";
    }else{
        top++;
        stack[top] = x;
    }
    
}

void pop(){
    if (top == -1)
    {
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"The Popped Element is "<<stack[top]<<endl;
        top--;
    }
    
}

int peak(){
    return stack[top];
}

void display(){
    if (top>=0)
    {
        cout<<"Stck Element are"<<endl;
        for (int i = top; i >= 0; i--)
        {
            cout<<stack[i]<<endl;
        }
        
    }else{
        cout<<"Stack is Empty.";
    }
    
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    // pop();
   int y =  peak();
   cout<<"Top element of the stack is "<<y;
    return 0;
}