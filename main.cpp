#include <bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node* next;
};

struct node* insertAtHead(struct node* head,int value){
    struct node* temp = new node;
    temp->value  =  value;
    temp->next = head;
    return temp;
}
void display(struct node* head){
    struct node* temp = head;
    while(temp!=NULL){
        cout<<temp->value<<'\n';
        temp = temp->next;
    }
}
struct node* insertAtLast(struct node* head,int value){
    struct node* temp = new node;
    struct node* point = head;
    while(point->next !=NULL){
        point = point->next;
    }
    temp->value = value;
    point->next = temp;
    temp->next = NULL;
    return head;
}
struct node* insertAtBetween(struct node* head,int value,int position){
    struct node* temp = new node;
    struct node* point = head;
    int i = 0;
    while(i!=position-1){
        point = point->next;
        i++;
    }
    temp->value = value;
    temp->next=point->next;
    point->next = temp;
    return head;
}

struct node* insertAtNode(struct node* head,int value,int position){
    struct node* point = head;
    int i = 0;
    while(i!=position-1){
        point = point->next;
        i++;
    }
    point->value = value;
    return head;
}

struct node* deleteHead(struct node* head){
    head = head->next;
    return head;
}
struct node* deleteAtTail(struct node* head){
    struct node* point = head;
    while(point->next->next != NULL){
        point = point->next;
    }
    point->next = NULL;
    return head;
}

int main(void)
{
    struct node* head = NULL;
    head = insertAtHead(head,2);
    head = insertAtHead(head,1);
    head = insertAtLast(head,100);
    head = insertAtLast(head,200);
    head = insertAtBetween(head,30,2);
    head = insertAtBetween(head,50,3);
    //head = deleteHead(head);
    head = insertAtNode(head,5,1);
    head = deleteAtTail(head);

    display(head);
}
