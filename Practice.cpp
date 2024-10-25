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
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}

void InsertEnd(int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;   
}
void display(){
    cout<<"Data Element in the single liked list is here :";
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    Insert(10);
    Insert(20);
    Insert(30);
    InsertEnd(40);
    display();
    return 0;
}