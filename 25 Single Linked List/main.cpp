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

void InsertAtEnd(int n){
    Node *newnode = new Node;
    newnode->data = n;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    Node *temp = head;
    while (temp ->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;    
}

void InsertAtPosition(int pos, int n){
    Node *newNode = new Node;
    newNode->data = n;
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    Node *temp = head;
    for (int i = 1; i < pos -1 && temp!=NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout<<"Invalid Position"<<endl;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int getCount() 
{ 
    // Initialize count 
    int count = 0; 
 
    // Initialize current 
    Node *temp = head;
    while (temp != NULL) 
    { 
        count++; 
        temp = temp->next; 
    } 
    return count; 
}

void Print(){
    cout<<"Data Element in the single liked list is here :";
    Node *temp = head;
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
    Insert(9);
    // InsertAtEnd(20);
    InsertAtPosition(3, 67);
    Print();
    int size = getCount();
    cout<<"The size is This: "<<size;
    return 0;
}