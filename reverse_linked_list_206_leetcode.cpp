#include "reverse_linked_list_206_leetcode.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


void print_list_206(ListNode *head)
{
    ListNode *temp = head;

    while(temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse_linked_list_206_leetcode::reverse_linked_list()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    print_list_206(head);

    ListNode *current = head;

    ListNode *prev = nullptr;

    while(current != nullptr)
    {
        ListNode *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;

    print_list_206(head);
}

reverse_linked_list_206_leetcode::reverse_linked_list_206_leetcode()
{

}
