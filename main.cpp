#include <bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;
};

void printNode(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->value << '\n';
        ptr = ptr->next;
    }
}
int main(void)
{
    node *head = new node;
    node *second = new node;
    node *tail = new node;
    node* third = new node;

    head->value = 7;
    head->next = second;

    second->value = 45;
    second->next = third;

    third -> value = 100;
    third -> next = tail;

    tail->value = 23;
    tail->next = NULL;



    printNode(head);
}
