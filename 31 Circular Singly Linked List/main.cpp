#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void InsertFirst(int n){
    Node *newNode = new Node;
    newNode->data = n;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }else{
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }  
}

void InsertEnd(int n){
    Node *newNode = new Node;
    newNode->data = n;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }else{
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }  
}

void InsertAtPosition(int pos, int n){
    Node *newNode = new Node;
    newNode->data = n;
    if (pos == 1)
    {
        InsertFirst(n);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < pos -1 && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == head && count < pos -1)
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode; 
}

void DeleteFirst(){
    if (head == NULL)
    {
        cout<<"List is Empty."<<endl;
        return;
    }
    if (head->next == head)
    {
        delete head;
        head = NULL;
    }else{
        Node *temp = head;
        Node *last = head;
        while (last->next != head)
        {
            last = last->next;
        }
        head = head->next;
        last->next = head;
        delete temp;
    }
}

void DeleteEnd(){
    if (head == NULL)
    {
        cout<<"List is Empty."<<endl;
        return;
    }
    if (head->next == head)
    {
        delete head;
        head = NULL;
    }else{
        Node *temp = head;
        Node *prev = NULL;
        while (temp->next != head)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = head;
        delete temp;
    }
}

void DeleteAtPosition(int pos){
    if (head == NULL)
    {
        cout<<"List is Empty."<<endl;
        return;
    }
    if (pos == 1)
    {
            DeleteFirst();
            return;
    }
    Node *temp = head;
    Node *prev = NULL;
    int count = 1;
    while (count< pos && temp->next != head)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }
    if (temp->next == head && count<pos)
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
}

void Search(int key){
    if (head == NULL)
    {
        cout<<"The list is empty"<<endl;
        return;
    }
    Node *temp = head;
    int position = 1;
    do
    {
        if (temp->data == key)
        {
            cout<<"Element "<<key<<"Found at Position "<<position<<"."<<endl;
            return;
        }
        temp = temp->next;
        position++;
        
    } while (temp!=head);
            cout<<"Element "<<key<<"Not Found in the list. "<<endl;
}

void Print(){
    if (head == NULL)
    {
        cout<<"The list is Empty"<<endl;
        return;
    }
    Node *temp = head;
    do
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    } while (temp != head); 
}

int main()
{
    InsertFirst(10);
    InsertFirst(20);
    InsertFirst(30);
    InsertFirst(40);
    InsertFirst(50);
    // InsertEnd(70);
    // InsertAtPosition(2, 556);
    // DeleteFirst();
    // DeleteEnd();
    DeleteAtPosition(3);
    Print();
    return 0;
}