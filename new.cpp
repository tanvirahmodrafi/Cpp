#include <iostream>
using namespace std;

struct node
{
    int value;
    struct node *next;
    struct node *prev;

};

struct node *insertAtHead(struct node *head, int val)
{
    struct node *temp = new node;
    temp->value = val;
    temp->next = head;
    head = temp;
    return head;
}

void display(struct node *head)
{
    struct node *cur = head;
    while (cur != NULL)
    {
        cout << cur->value << ' ';
        cur = cur->next;
    }
}

struct node *insertAtTail(struct node *head, int val)
{
    struct node *temp = new node;
    struct node *cur = head;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    temp->value = val;
    temp->next = cur->next;
    cur->next = temp;
    return head;
}
struct node *insertAtK(struct node *head, int val, int k)
{
    struct node *temp = new node;
    struct node *cur = head;
    for (int i = 1; i < k; i++)
    {
        cur = cur->next;
    }
    temp->value = val;
    temp->next = cur->next;
    cur->next = temp;
    return head;
}
struct node* deleteAtHead(struct node *head){
    head = head ->next;
    return head;
}
struct node* deleteAttail(struct node *head){
    struct node *cur = head;
    while (cur->next->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = NULL;

    return head;  
}
struct node* deleteAtK(struct node *head, int k){
    struct node *cur = head;
    for (int i = 1; i < k-1; i++)
    {
        cur = cur->next;
    }
    cur->next = cur->next->next;
    return head;

}

int main(void)
{
    struct node *head = NULL;

    head = insertAtHead(head, 19);
    head = insertAtHead(head, 13);
    head = insertAtHead(head, 14);
    head = insertAtHead(head, 8);
    head = insertAtHead(head, 5);
    head = insertAtTail(head, 7);
    head = insertAtK(head,1,3);
    display(head);
    cout << '\n';
    head = deleteAtK(head,3);
    display(head);
    return 0;
}