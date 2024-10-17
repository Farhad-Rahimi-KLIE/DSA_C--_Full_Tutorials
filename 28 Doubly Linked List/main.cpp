#include<iostream>

using namespace std;

struct Node
{
        int data;
        Node *next;
        Node *prev;
};
Node *head = NULL;

void Insert(int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    newNode->prev = NULL;
    if (head!=NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
    
}

void Print(){
    cout<<"Data Element in the Doubly liked list is here :";
    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}


int main()
{
    Insert(4);
    Insert(2);
    Insert(1);
    Insert(6);
    Insert(7);
    Print();
    return 0;
}