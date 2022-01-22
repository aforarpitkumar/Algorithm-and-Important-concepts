#include <iostream>

using namespace std;

class Node{
    public:
    int Value;
    Node* Next;
};

void printLinkedList(Node* n){
    
    while(n != NULL){
        
        cout<< n-> Value<< endl;
        n = n->Next;
        
    }
    
}

void AddFront(Node** head, int newValue){
    
    Node* newnode = new Node();
    
    newnode -> Value = newValue;
    
    newnode -> Next = *head;
    
    *head = newnode;
    
}

void AddLast (Node** head, int newValue){
    
    
    Node* newnode = new Node();
    
    newnode -> Value = newValue;
    
    newnode -> Next = NULL;
    
    if (*head ==NULL){
        
        *head = newnode;
        return;
    }
    
    Node* last = *head;
    
    while (last -> Next !=NULL){
        
        last = last ->Next;
    }
    
    
    last -> Next = newnode;
    
}

int main()
{
    //cout<<"Hello World";
    
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    head -> Value = 1;
    head -> Next = second;
    
    second -> Value = 2;
    second -> Next = third;
    
    third -> Value = 3;
    third -> Next = NULL;
    
    
    AddFront(&head, 0);
    AddLast(&head,4);
    printLinkedList(head);

    return 0;
}
