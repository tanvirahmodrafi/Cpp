#include <bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;
};

struct node* head = NULL;

void insertAtFirst(int value)
{
    struct node *temp = new node;
    temp->value = value;
    temp->next = head;
    head = temp;
}
void insertAtLast(int value)
{
    struct node *temp = new node;
    struct node *t = head;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = temp;
    temp->value = value;
    temp->next = NULL;
}
void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << ' ';
        temp = temp->next;
    }
    
}

int main(){
    
}