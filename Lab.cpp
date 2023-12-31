#include <bits/stdc++.h>
using namespace std;
struct stak
{
    int top;
    int size;
    int *arr;
};

struct stak *creatStack(int val)
{
    struct stak *stack = new stak;
    stack->top = -1;
    stack->size = val;
    stack->arr = new int[stack->size];
    return stack;
}
int isEmpty(struct stak *ptr)
{
    return (ptr->top == -1);
}

int isFull(stak *stack)
{
    return (stack->size == stack->top);
}

void push(struct stak *ptr, int value)
{
    if (isFull(ptr))
    {
        cout << "Full";
        return;
    }
    ptr->top++;
    ptr->arr[ptr->top] = value;
}

void pop(struct stak *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "Empty";
        return;
    }
    ptr->top--;
}

void peek(struct stak *ptr){
    cout << ptr->arr[ptr->top];
}


int main(void)
{
    int value = 4;
    struct stak *stack = creatStack(value);
    push(stack, 5);
}