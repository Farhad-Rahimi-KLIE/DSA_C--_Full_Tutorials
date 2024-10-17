#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;

void Insert(int n)
{
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
}

void DeleteAtBeginning(){
    if (head == NULL)
    {
        cout<<"the list is Empty Nothing to Delete."<<endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    if (head!=NULL)
    {
        head->prev = NULL;
    }
    delete temp;
    
    
}

void DeleteAtEnd(){
    if (head == NULL)
    {
        cout<<"the list is Empty Nothing to Delete."<<endl;
        return;
    }
    Node *temp = head;
    while (temp->next !=NULL)
    {
        temp = temp->next;
    }
    if (temp->prev !=NULL)
    {
        temp->prev->next = NULL;
    }else{
        head = NULL;
    }
    delete temp;   
}

void DeleteAtPosition(int pos){
    if (head == NULL)
    {
        cout<<"the list is Empty Nothing to Delete."<<endl;
        return;
    }
    Node *temp = head;
    if (pos == 1)
    {
        head = head->next;
        if (head!=NULL)
        {
            head->prev = NULL;
        }
        delete temp;
        return;
    }
    for (int i = 1; i < pos && temp!=NULL; i++)
    {
        temp = temp->next;
    }
     if (temp == NULL)
    {
        cout<<"Position"<<pos<<"Does not Esixt in the List"<<endl;
        return;
    }
    if (temp->next !=NULL)
    {
        temp->next->prev = temp->prev;
    }
     if (temp->prev !=NULL)
    {
        temp->prev->next = temp->next;
    }
    delete temp;  
}

void Print()
{
    cout << "Data Element in the Doubly liked list is here :";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
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
    DeleteAtBeginning();
    DeleteAtEnd();
    DeleteAtPosition(2);
    Print();
    return 0;
}