#include <bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;
};
struct node *head = NULL;
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
void maxOrMin()
{
    int min = INT_MAX;
    int max = INT_MIN;
    struct node *Nmin = head;
    struct node *Nmax = head;
    struct node *cur = head;
    while (cur != NULL)
    {
        if (cur->value < min)
        {
            min = cur->value;
            Nmin = cur;
        }
        else if (cur->value > max)
        {
            max = cur->value;
            Nmax = cur;
        }
        cur = cur->next;
    }
    swap(Nmax->value, Nmin->value);
}
void search(int val)
{
    struct node *cur = head;
    struct node *prev = head;
    while (cur != NULL && cur->value != val)
    {
        cur = cur->next;
    }
    if (cur != NULL && cur != head)
    {
        while (prev->next != cur)
        {
            prev = prev->next;
        }
    }
    else if (cur == head)
    {
        return;
    }
    if (cur != NULL)
    {
        prev->next = cur->next;
        cur->next = head;
        head = cur;
    }
    else
    {
        insertAtLast(val);
    }
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

int main()
{
    insertAtFirst(5);
    insertAtLast(7);
    insertAtLast(8);
    insertAtFirst(0);

    // display();

    search(8);
    display();
}