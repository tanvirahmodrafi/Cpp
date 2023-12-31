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

void maxOrMin(){
    int min = INT_MAX;
    int max = INT_MIN;
    struct node* Nmin = head;
    struct node* Nmax = head;
    struct node* cur = head;
    while(cur != NULL){
        if(cur->value < min){
            min = cur->value;
            Nmin = cur;
        }
        else if(cur->value > max){
            max = cur->value;
            Nmax = cur;
        }
        cur = cur->next;
    }
    swap(Nmax->value, Nmin->value);
}

int main(){
    insertAtFirst(9);
    insertAtLast(11);
    insertAtLast(7);
    //insertAtFirst(7);
    insertAtLast(10);
    
    //maxOrMin();
    display();
}