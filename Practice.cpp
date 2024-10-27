#include <iostream>

using namespace std;

struct Node // Structure of Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void InsertAtFirst(int n)
{                             //   10    head
    Node *newNode = new Node; // data, *next
    newNode->data = n;
    newNode->next = head;
    head = newNode;
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

void display()
{
    cout << "all Linked list here: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    InsertAtFirst(60);
    InsertAtFirst(40);
    InsertAtFirst(10);
    InsertAtFirst(20);
    InsertAtFirst(30);
    display();
    cout << endl;
    int size = getCount();
    cout << "The size is This: " << size;
    return 0;
}