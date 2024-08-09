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

ListNode *insertAtFirst(ListNode *head, int value)
{
    ListNode *temp = new ListNode(value);
    temp->next = head;
    head = temp;
    return head;
}

ListNode *insertAtLast(ListNode *head, int value)
{
    ListNode *temp = new ListNode(value);
    if (head == nullptr)
    {
        head = temp;
    }
    else
    {
        ListNode *t = head;
        while (t->next != nullptr)
        {
            t = t->next;
        }
        t->next = temp;
    }
    return head;
}

ListNode *modifiedList(vector<int> &nums, ListNode *head)
{
    if (nums.empty() || head == nullptr)
        return head;

    ListNode *heads = nullptr;
    unordered_set<int> numSet(nums.begin(), nums.end());

    ListNode *cur = head;
    while (cur != nullptr)
    {
        if (numSet.find(cur->val) == numSet.end())
        {
            if (heads == nullptr)
            {
                heads = new ListNode(cur->val);
            }
            else
            {
                insertAtLast(heads, cur->val);
            }
        }
        cur = cur->next;
    }

    return heads;
}

int main()
{
    // Example usage of the code

    // Creating a list 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    vector<int> nums;
    nums.push_back(2);
    nums.push_back(4); // Elements to remove

    ListNode *newHead = modifiedList(nums, head);

    // Output the modified list
    ListNode *cur = newHead;
    while (cur != nullptr)
    {
        cout << cur->val << " ";
        cur = cur->next;
    }

    return 0;
}
