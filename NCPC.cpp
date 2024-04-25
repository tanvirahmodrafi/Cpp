#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* insertElement(ListNode *&head, int val)
{
    ListNode *newNode = new ListNode(val);

    if (head == nullptr)
    {
        head = newNode;
        return head;
    }

    ListNode *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;

    return head;
}

ListNode *insertAtHead(ListNode *head, int val){
    ListNode *newNode = new ListNode(val);

    newNode->next = head;
    head = newNode;

    return head;
}
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* list1 = NULL;
    ListNode* list2 = NULL;
    ListNode* head = NULL;
    while (l1 != NULL) {
        list1 = insertAtHead(list1, l1->val);
        l1 = l1->next;
    }

    while (l2 != NULL) {
        list2 = insertAtHead(list2, l2->val);
        l2 = l2->next;
    }

    bool carry = false;
    int n;

    while(list1 != NULL || list2 != NULL || carry) {
        int n = (list1 ? list1->val : 0) + (list2 ? list2->val : 0) + carry;
        carry = (n >= 10);
        n %= 10;
        head = insertElement(head, n);

        if (list1) list1 = list1->next;
        if (list2) list2 = list2->next;
    }

    ListNode* current1 = head;
    while (current1 != NULL) {
        cout << current1->val << ' ';
        current1 = current1->next;
    }
    return head;
}

int main()
{
    ListNode *head =NULL;
    ListNode *head2 = NULL;


    // insertElement(head,9);
    // insertElement(head,9);
    // insertElement(head,9);
    // insertElement(head,9);
    // insertElement(head,9);
    // insertElement(head,9);
    // insertElement(head,9);
    // insertElement(head2,9);
    // insertElement(head2,9);
    // insertElement(head2,9);
    // insertElement(head2,9);
    // addTwoNumbers(head,head2);
    cout<<0/0;
    

}
