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

void InsertAtEnd(int n)
{
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void InsertAtPosition(int pos, int n)
{
    Node *newNode = new Node;
    newNode->data = n;
    if (pos == 1)
    {
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos -1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout<<"Position"<<pos<<"Does not Esixt in the List"<<endl;
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next !=NULL)
    {
    temp->next->prev = newNode;   
    }
    temp->next = newNode;
    
    
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
    // InsertAtEnd(5);
    // InsertAtEnd(9);
    InsertAtPosition(7,8);
    Print();
    return 0;
}