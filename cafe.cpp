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
    if(head == NULL){
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
    tail = temp;
}

void insertAtK(int val, int k)
{
    struct node *temp = new node;
    temp->value = val;
    struct node *cur = head;

    for (int i = 1; i < k - 1; i++)
    {
        cur = cur->next;
    }
    temp->next = cur->next;
    temp->prev = cur;
    cur->next->prev = temp;
    cur->next = temp;
}

void deleteAtHead()
{
    head->next->prev = NULL;
    head = head->next;
}

void deleteAtTail()
{
    struct node *cur = head;
    while (cur->next->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = NULL;
}

void deleteAtK(int k)
{
    struct node *cur = head;

    for (int i = 1; i < k - 1; i++)
    {
        cur = cur->next;
    }
    cur->next = cur->next->next;
    cur->next->next->prev = cur;
}

void display()
{
    struct node *cur = head;
    while (cur != NULL)
    {
        cout << cur->value << " ";
        cur = cur->next;
    }
}

void search(int key)
{

    struct node *cur = head;
    while (cur != NULL)
    {

        if (cur->value == key)
        {
            cout << "* Found *" << endl;
            return;
        }
        cur = cur->next;
    }

    cout << "* Not Found *" << endl;
}

void remove(int val)
{
    struct node *cur = head;
    while (cur != NULL)
    {

        if (cur->value == val)
        {
            break;
        }
        cur = cur->next;
    }

    if (cur->prev == NULL)
    {
        head = cur->next;
        head->prev = NULL;
    }
    else if (cur->next == NULL)
    {
        cur->prev->next = NULL;
    }

    else
    {
        cur->prev->next = cur->next;
        cur->next->prev = cur->prev;
    }
    cout << "** " << cur->value << " Is removed from the list" << endl;
}

void middle()
{
    struct node *cur = head;
    int a = 0;
    while (cur->next != NULL)
    {
        cur = cur->next;
        a++;
    }
    int mid = a / 2;
    cur = head;
    for (int i = 0; i < mid; i++)
    {
        cur = cur->next;
    }
    cout << "** The middle node of the list is " << cur->value << endl;
}

int main()
{

    // cout << "----------The Given List----------" << endl
    //      << endl
    //      << endl;
    // insertAtHead(45);
    // insertAtHead(12);
    // insertAtHead(51);
    // insertAtHead(25);
    // insertAtHead(61);
    // insertAtHead(78);
    // insertAtHead(91);

    // display();
    cout << endl;
    cout << endl;
    cout << endl;
    while (1)
    {

        cout << "Select the desired operation" << endl
             << "----------------------------" << endl
             << "  ------------------------" << endl
             << "    --------------------" << endl
             << "      ----------------" << endl
             << "        ------------"
             << endl
             << endl;
        cout << "1. Insert any data at the list" << endl;
        cout << "2. Search any data in the list" << endl;
        cout << "3. Remove any data from specific part" << endl;
        cout << "4. Find middle data of the node" << endl;
        cout << "5. Display" << endl;
        cout << "6. END" << endl;
        cout << endl;
        cout << endl;

        int m;

        cin >> m;

        if (m == 1)
        {
            cout << endl;
            cout << "Enter the value" << endl;
            int add;
            cout << endl;
            cin >> add;
            cout << endl;
            cout << "Where do you want to insert the value??" << endl
                 << endl
                 << "1. Head" << endl
                 << "2. Tail" << endl
                 << "3. At any desired position" << endl;
            cout << endl;
            int menu;
            cin >> menu;
            cout << endl;
            if (menu == 1)
            {
                insertAtHead(add);
            }
            else if (menu == 2)
            {
                insertAtTail(add);
            }
            else
            {
                int position;
                cout << "Enter that specfic loaction" << endl;
                cout << endl;
                cin >> position;
                insertAtK(add, position);
            }
            cout << endl;
            cout << "* Your value is added to your desired location *";
            cout << endl;
            cout << endl;
        }
        else if (m == 2)
        {
            cout << endl;
            int sValue;
            cout << "Enter the value that you want to search in the list" << endl;
            cout << endl;
            cin >> sValue;
            cout << endl;
            search(sValue);
            cout << endl;
            cout << endl;
        }
        else if (m == 3)
        {
            cout << endl;
            int rValue;
            cout << "Enter the value that you want to remove from the list" << endl;
            cout << endl;
            cin >> rValue;
            cout << endl;
            remove(rValue);
            cout << endl;
            cout << endl;
        }

        else if (m == 4)
        {
            cout << endl;
            middle();
            cout << endl;
        }
        else if (m == 5)
        {
            cout << endl;
            cout << "    * The list is *" << endl;
            cout << endl;
            cout << "    ";
            display();
            cout << endl;
            cout << endl;
        }
        else if (m == 6)
        {
            break;
        }
    }
    cout << "---Thank You---" << endl;

    return 0;
}