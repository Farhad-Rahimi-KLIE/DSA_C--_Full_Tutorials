#include<iostream>

using namespace std;
// Circular Singly Linked List

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
    }
}

int main()
{
    return 0;
}