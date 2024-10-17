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

void deleteFirstNode(){
    if (head == NULL)
    {
        cout<<"List is Empty: Nothing to Delete"<<endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    
}

void deleteLastNode(){
    if (head == NULL)
    {
        cout<<"List is Empty: Nothing to Delete"<<endl;
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next->next !=NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
     
}

void deleteNodeAtPosition(int position){
    if (head == NULL)
    {
        cout<<"List is Empty: Nothing to Delete"<<endl;
        return;
    }
    Node *temp = head;
    if (position == 1)
    {
       head = temp->next;
       delete temp;
       return;
    }
    for (int i = 1; temp !=NULL && i< position-1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL && temp->next == NULL)
    {
        cout<<"Position"<<position<<"Does not exist in the list"<<endl;
        return;
    }
    Node *next = temp->next->next;
    delete temp->next;
    temp->next = next;
    
    
     
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
    Insert(4);
    Insert(5);
    Insert(9);
    // deleteFirstNode();
    // deleteLastNode();
    deleteNodeAtPosition(3);
    Print();
    return 0;
}