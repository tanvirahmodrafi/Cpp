#include <bits/stdc++.h>
using namespace std;
struct node{
    int value;
    struct node* next;
    struct node* prev;
};
struct node* head = NULL;

struct node* insertAtHead(int value){
    struct node* temp = new node;
    temp->value = value;
    temp->next = head;
    temp->prev = NULL;

    if (head != NULL) {
        head->prev = temp;
    }
    
    head = temp;
    return head;
}

void display()
{
    struct node *cur = head;
    while (cur != NULL)
    {
        cout << cur->value << ' ';
        cur = cur->next;
    }
}

int main()
{
    head = insertAtHead(5);
    display();
    return 0;
}