#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;

int getCount(){
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count; 
}

void Traversing(){
    Node *temp = head;
    cout<<"All Linked List"<<endl;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } 
}

int main()
{
    Traversing();
    cout<<endl;
    int Count = getCount();
    cout<<"Size of Linked List is : "<<Count<<endl;
    return 0;
}