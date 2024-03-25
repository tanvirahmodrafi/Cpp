#include <bits/stdc++.h>
using namespace std;
string addBinary(string a, string b)
{
    int n = max(a.size(), b.size());
    int an = a.size() - 1;
    int bn = b.size() - 1;
    string carry = "0";
    string st, ans;

    for (int i = 0; i < n; i++)
    {
        int sum = (a[an--] - '0') + (b[bn--] - '0') + (carry[0] - '0');
        if (sum > 1)
        {
            st = '1';
            carry = '1';
        }
        else
        {
            carry = '0';
            ans = to_string(sum);
        }
        ans = ans + st;
    }
    return ans;
}
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void insertElement(ListNode *&head, int val)
{
    ListNode *newNode = new ListNode(val);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    ListNode *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}
void printList(ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}
void deleteNode(ListNode *&head, int target)
{

    if (head == nullptr)
    {
        return;
    }

    if (head->val == target)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    ListNode *current = head;
    while (current->next != nullptr && current->next->val != target)
    {
        current = current->next;
    }

    if (current->next != nullptr)
    {
        ListNode *temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}
ListNode *deleteDuplicates(ListNode *head){
    ListNode *cur = head;
    stack<int> n;

    while (cur->next != NULL){
        if (cur->val == cur->next->val)
        {
            n.push(cur->val);
            cur->next = cur->next->next;
        }
        cur = cur->next;
    }
    while (!n.empty()){
        cout << n.top() << ' ';
        n.pop();
    }
    cout << endl;
    while (!n.empty()){
        deleteNode(head, n.top());
        n.pop();
    }
    return head;
}


int main()
{
    ListNode *head = nullptr;
    // insertElement(head, 1);
    // insertElement(head, 1);
    insertElement(head, 1);
    insertElement(head, 2);
    insertElement(head, 3);
    // insertElement(head, 4);
    // insertElement(head, 5);
    printList(head);
    // deleteDuplicates(head);
    

    printList(head);
}
