#include <bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *tail = NULL;

void insertAtHead(int val)
{
    struct node *temp = new node;
    temp->value = val;
    temp->prev = NULL;
    temp->next = head;

    if (head != NULL)
    {
        head->prev = temp;
    }

    if (head == NULL)
    {
        tail = temp;
    }

    head = temp;
}

void insertAtTail(int val)
{
    struct node *temp = new node;
    temp->value = val;
    temp->next = NULL;
    temp->prev = tail;

    if (tail != NULL)
    {
        tail->next = temp;
    }

    tail = temp;
}

void display()
{
    struct node *cur = head;
    while (cur != NULL)
    {
        cout << cur->value << " ";
        cur = cur->next;
    }
    cout << endl;
}

void searchP(int key)
{
    struct node *cur = head;

    while (cur != NULL)
    {

        if (key == cur->value)
        {
            if (cur->next == NULL)
            {
                int u = cur->value;
                cur->prev->next = NULL;
                cur->prev = NULL;
                insertAtHead(u);
                return;
            }

            if (cur->prev == NULL)
            {

                return;
            }

            int u = cur->value;
            cur->prev->next = cur->next;
            cur->next->prev = cur->prev;
            insertAtHead(u);
            return;
        }
        cur = cur->next;
    }

    insertAtTail(key);
}

int main()
{
    insertAtHead(23);
    insertAtHead(85);
    insertAtHead(41);
    insertAtHead(97);
    insertAtHead(33);
    insertAtHead(29);

    display();

    cout << "enter number" << endl;
    int num;
    cin >> num;

    searchP(num);

    cout << endl;

    display();

    return 0;
}