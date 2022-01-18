#include "palindrome_linked_list_234.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool palindrome_linked_list_234::palindrome_check()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(1);

    stack<ListNode> stack;
    ListNode *current = head;

    while(current != nullptr)
    {
        stack.push(*current);
        current = current->next;
    }

    current = head;

    while(current != nullptr)
    {
        if(current->val != stack.top().val)
        {
            return false;
        }
        else
        {
            current = current->next;
            stack.pop();
        }
    }

    return true;
}

palindrome_linked_list_234::palindrome_linked_list_234()
{

}
