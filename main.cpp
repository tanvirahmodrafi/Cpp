#include <bits/stdc++.h>
using namespace std;
struct Node
{
   int value;
   struct Node *next;
};
struct Node *head = NULL;

void *insertAtFirst(struct Node *head, int value)
{
   struct Node *temp = new Node;
   temp->value = value;
   temp->next = head;
   head = temp;
   
}

void *insertAtInBetween(struct Node *head, int value, int index)
{
   struct Node *temp = new Node;
   struct Node *t = head; 
   int i = 0;
   while (i != index - 1)
   {
      t = t->next;
      i++;
   }
   temp->value = value;
   temp->next = t->next;
   t->next = temp;
}

void *insertAtLast(struct Node *head, int value)
{
   struct Node *temp = new Node;
   struct Node *t = head;
   while (t->next != NULL)
   {
      t = t->next;
   }
   t->next = temp;
   temp->value = value;
   temp->next = NULL;
   
}

void displayNode(struct Node *head)
{
   while (head != NULL)
   { 
      cout << head->value << '\n';
      head = head->next;
   }
}

void *deleteHead(struct Node *head)
{
   head = head->next;
   return head;
}

void *deleteAtTail(struct Node *head)
{
   struct Node *point = head;
   while (point->next->next != NULL)
   {
      point = point->next;
   }
   point->next = NULL;
   return head;
}

int sum(){

}








struct Node* deleteNode(struct Node *head,int val){
   
}
int main(void)
{

}