#include <bits/stdc++.h>
using namespace std;
struct stacks
{
    int top;
    int size;
    int *arr;
};
struct stacks *createStack(int value)
{
    struct stacks *stack = new stacks;
    stack->top = -1;
    stack->size = value;
    stack->arr = new int[stack->size];
    return stack;
}
int isEmpty(struct stacks *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stacks *ptr)
{
    if (ptr->top == (ptr->size) - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct stacks *ptr, int val)
{
    if (ptr->top == (ptr->size) - 1)
    {
        cout << "Stacks full\n";
        return;
    }
    ptr->top++;
    ptr->arr[ptr->top] = val;
}
void pop(struct stacks *ptr)
{
    if (ptr->top == -1)
    {
        cout << "Stacks empty\n";
        return;
    }
    ptr->top--;
}
int peek(struct stacks *ptr)
{
    if (ptr->top == -1)
    {
        cout << "Stacks empty\n";
        return -1000;
    }
    return ptr->arr[ptr->top];
}
void display(struct stacks *ptr)
{
    cout<<"Showing according to Queue\n";
    for (int i = ptr->top; i >= 0; i--)
    {
        cout << ptr->arr[i] << " ";
    }
}

void enqueue(struct stacks *ptr,int val){
    if(isFull(ptr)){
        cout<<"Full";
        return;
    }
    stacks * newSt = createStack(ptr->size);
    while(!isEmpty(ptr)){
        push(newSt,peek(ptr)); 
        pop(ptr);
    }
    push(ptr,val);
    while (!isEmpty(newSt)) {
        push(ptr, peek(newSt));
        pop(newSt);
    }
}
void dequeue(struct stacks *ptr){
    pop(ptr);
}
void top(struct stacks *ptr){
    cout<<peek(ptr)<<endl;
}

int main(void)
{
    struct stacks *ptr = createStack(4);
    enqueue(ptr, 2);
    enqueue(ptr, 3);
    enqueue(ptr, 7);
    enqueue(ptr, 1);
    dequeue(ptr);//delete the very first element.
    display(ptr);
    top(ptr);//First element that inserted.
    
}
