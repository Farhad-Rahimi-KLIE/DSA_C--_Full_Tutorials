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

int SearchElement(int key){
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
int main()
{
    Insert(1);
    Insert(3);
    Insert(6);
    Insert(2);
    Insert(4);
    Insert(5);
    Insert(9);
    int position = SearchElement(3);
    if (position == -1)
    {
        cout<<"Element not found in the list"<<endl;
    }else{
        cout<<"Element found at position"<<position<<" in the list"<<endl;
    }
    
    return 0;
}