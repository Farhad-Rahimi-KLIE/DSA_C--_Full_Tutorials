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

int SearchLinkedList(int key){
    Node *temp = head;
    int pos = 1;
    while (temp!=NULL)
    {
        if (temp->data == key)
        {
            return pos;
        }
        temp = temp->next;
        pos++;
        
    }
    return -1;  
}

void Traverse(){
    Node *temp = head;
    cout<<"Heres the Linked List:"<<endl;
    while (temp!= NULL)
    {
        cout<<temp->data<<" ";
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
    Traverse();
    int result = SearchLinkedList(30);
    if (result == -1)
    {
        cout<<"Element not found in the list"<<endl;
    }else{
        cout<<"Element found at position"<<result<<" in the list"<<endl;
    }
    
    cout << endl;
    int size = getCount();
    cout << "The size is This: " << size;
    return 0;
}