#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void Insert(int n){
    Node *newNode = new Node;
    newNode ->data = n;
    newNode ->next = head;
    head = newNode;
}

void Traverssing(){
    Node *temp = head;
    cout<<"Element in a single Linked list is here By Farhad Rahimi Klie"<<endl;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

int main()
{
    Insert(1);
    Insert(3);
    Insert(6);
    Insert(2);
    Insert(4);
    Insert(5);
    Insert(9);
    Traverssing();
    return 0;
}