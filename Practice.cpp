#include<iostream>

using namespace std;

struct Node // make a node for linked list
{
        int data; // 
        Node *next; // pointer to point next node data;
};

Node *head = NULL; // this is a head of Linked list

void Insert(int x){
    Node *newNode = new Node; // allocated dynamic memory allocation
    newNode->data = x;
    newNode->next = head;
    head = newNode;
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
    Insert(1);
    Insert(2);
    Insert(3);
    display();
    return 0;   
}