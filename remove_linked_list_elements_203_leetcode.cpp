#include "remove_linked_list_elements_203_leetcode.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void print_list(ListNode *head)
{
    ListNode *temp = head;

    while(temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void remove_linked_list_elements_203_leetcode::remove_linked_list_elements()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(8);

    int val = 4;

    print_list(head);

    ListNode *current = head;

    while (head->next != nullptr) {
        if(head->next->val == val)
        {
            ListNode *buffer = head->next;
            head->next = head->next->next;
            delete buffer;
        }
        head = head->next;
    }

    print_list(current);
}

remove_linked_list_elements_203_leetcode::remove_linked_list_elements_203_leetcode()
{

}
