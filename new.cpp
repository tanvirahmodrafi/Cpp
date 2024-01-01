// #include <iostream>

// using namespace std;

// struct stack{
//     int top;
//     int size;
//     int *items;

// };

// int capacity;

// stack *createStack()
// {
//     stack *pt = new stack();
//     pt->size= capacity;
//     pt->top = -1;
//     pt->items = new int(capacity);
//     return pt;
// }


// int arr[100];

// void bubblesort(int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }

//         }
//     }
// }

// stack newPush() {
//     cout<<"Enter the size of the stack\n";
//     cin>>capacity;
//     stack *pt =createStack();
//     int i=0;
//     while(i<capacity-1) {
//         cout<<"Press 1 to input\n"
//             <<"Press 2 to terminate";
//         int decision;
//         cin>>decision;
//         if(decision ==2)
//             break;
//         else {
//             cin>>arr[i];
//         }
//         i++;
//     }
//     bubblesort(i+1);
//     int n =i;

//     while(pt->top<capacity)
//     {
//         pt->top++;
//         pt->items[pt->top] = arr[n-i];
//         i--;
//     }
//     return *pt;
// }




// int main(){
//     stack myStack = newPush();
//     for(int i = 0; i<myStack.top;i++) {
//         cout<<myStack.items[i]<<endl;
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

struct stack{
    int data;
    stack *next;
} *head, *temp;

int arr[100];

void bubblesort(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
}

void newPush() {
    int i=0;
    while(1) {
        cout<<"Press 1 to input\n"
            <<"Press 2 to terminate";
        int decision;
        cin>>decision;
        if(decision ==2)
            break;
        else {
            cin>>arr[i];
        }
        i++;
    }
    bubblesort(i+1);
    int n =i;
    while(i--)
    {
        if(head == NULL)
        {
            head = new stack;
            head->next= NULL;
            head->data = arr[n-i];
        }
        else
        {
            temp = new stack;
            temp->data = arr[n-i];
            temp->next = head;
            head = temp;
        }
    }
}

void display()
{
    stack *cur  = head;
    if(cur == NULL)
    {
        cout<<"The stack is empty\n";
        return;
    }
    else
    {
        while(cur!=NULL)
        {
            cout<<cur->data<<endl;
            cur= cur->next;
        }
    }
}


int main(){
    head = NULL;
    newPush();
    display();
    return 0;
}