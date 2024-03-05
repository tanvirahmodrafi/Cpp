// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <string>
using namespace std;
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int value) : data(value), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    unordered_set<ListNode*> seen;
    ListNode * cur = head;
    while(cur != nullptr) {
        if(seen.find(cur) != seen.end()){
            return true;
        }else{
            seen.insert(cur);
        }
    }
    return false;

}

int main()
{
    cout<< hasCycle;

    return 0;
}
