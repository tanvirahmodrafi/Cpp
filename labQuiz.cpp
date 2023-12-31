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
// void search(int value)
// {
//     struct node *cur = head;
//     struct node *prev = NULL;

//     while (cur != NULL && cur->value != value)
//     {
//         prev = cur;
//         cur = cur->next;
//     }

//     if (cur != NULL)
//     {
//         if (prev != NULL)
//         {
//             prev->next = cur->next;
//             cur->next = head;
//             head = cur;
//         }

//         else if (cur != head)
//         {

//             head = cur;
//         }
//     }
//     else
//     {

//         insertAtLast(value);
//     }
// }
void search(int val){
    struct node *cur = head;
    struct node *prev = head;
    while(cur != NULL&& cur->value != val)
    {   
        cur = cur->next;
    }
    if(cur != NULL&& cur != head){
        while(prev->next != cur){
            prev = prev->next;
        }
    }else if(cur == head){
        return;
    }
    if(cur != NULL){
        prev->next = cur->next;
        cur->next = head;
        head = cur;
    }else{
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

    //display();

    search(8);
    display();
}