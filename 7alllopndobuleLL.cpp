#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int x){
        val = x;
        prev = NULL;
        next = NULL;
    }
};

void Insert(Node** head, int x){
    Node* temp = new Node(x);
    temp -> prev = NULL;
    temp->next = (*head);
    if((*head))
        (*head)-> prev = temp;
    (*head) = temp;
}

void Delete(Node** head, int key){
    if((*head) == NULL)
        return;
    if((*head)->val == key)
        (*head) = (*head)->next;
    Node* temp = (*head);
    while(temp){
        if(temp->val == key)
            break;
        temp = temp -> next;
    }
    if(temp -> next != NULL){
        temp -> next -> prev = temp -> prev;
    }
    if(temp -> prev != NULL){
        temp -> prev -> next = temp -> next;
    }
}

void Display(Node* temp){
    while(temp){
        cout<<temp->val<<" ";
        temp = temp -> next;
    }
}

int main(void){
    Node* head = new Node(6);
    Insert(&head, 4);
    Insert(&head, 7);
    Insert(&head, 9);
    Insert(&head, 4);
    Insert(&head, 2);
    Display(head);
    Delete(&head, 6);
    cout<<endl;
    Display(head);
    
}