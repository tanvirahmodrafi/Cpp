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

struct node* insertAtBetween(struct node* head,int value,int index){
    struct node* temp = new node;
    struct node* t = head;
    int i = 0;
    while(i != index-1){
        t = t->next;
        i++;
    }

    temp->value = value;
    temp->next = t->next;
    t->next = temp;

    return head;

}

struct node* insertAt1st(struct node* head,int value){
    struct node* temp = new node;
    temp->value = value;
    temp->next = head;
    return temp;
}
int main(void)
{
    node *head = NULL;
    

    head = insertAt1st(head,100);
    head = insertAt1st(head,10);
    head = insertAt1st(head,106);
    head = insertAt1st(head,140);
    // head = insertAt1st(head,120);
    // head = insertAt1st(head,110);
    // head = insertAt1st(head,600);
    // head = insertAt1st(head,104);
    // head = insertAt1st(head,1110);
    printNode(head);
    cout<<"___________"<<endl;
    head = insertAtBetween(head,104,2);

    printNode(head);
}
