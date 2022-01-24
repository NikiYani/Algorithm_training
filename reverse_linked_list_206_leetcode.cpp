#include "reverse_linked_list_206_leetcode.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct DoublyListNode {
    int val;
    DoublyListNode *prev;
    DoublyListNode *next;
    DoublyListNode() : val(0), prev(nullptr), next(nullptr) {}
    DoublyListNode(int x) : val(x), prev(nullptr), next(nullptr) {}
    DoublyListNode(int x, DoublyListNode *prev, DoublyListNode *next)
        : val(x), prev(prev), next(next) {}
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

void print_list_206(DoublyListNode *head)
{
    DoublyListNode *temp = head;
    DoublyListNode *temp_2 = head;

    cout << "Прямой порядок: ";
    while(temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    while(temp_2->next != nullptr)
    {
        temp_2 = temp_2->next;
    }

    cout << "Прямой обратный: ";
    while(temp_2 != nullptr)
    {
        cout << temp_2->val << " ";
        temp_2 = temp_2->prev;
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

void reverse_linked_list_206_leetcode::reverse_doubly_linked_list()
{
    DoublyListNode *head = new DoublyListNode(1, nullptr, nullptr);
    head->next = new DoublyListNode(2, head, nullptr);
    head->next->next = new DoublyListNode(3, head->next, nullptr);
    head->next->next->next = new DoublyListNode(4, head->next->next, nullptr);
    head->next->next->next->next = new DoublyListNode(5, head->next->next->next, nullptr);

    print_list_206(head);

    DoublyListNode *current = head;
    DoublyListNode *result = nullptr;

    if(current != nullptr)
    {
        DoublyListNode *next = current->next;
        current->next = result;
        current->prev = nullptr;
        result = current;
        current = next;
    }

    while (current != nullptr)
    {
        DoublyListNode *next = current->next;
        current->next = result;
        current->next->prev = current;
        current->prev = nullptr;
        result = current;
        current = next;
    }

    head = result;

    print_list_206(head);

}

reverse_linked_list_206_leetcode::reverse_linked_list_206_leetcode()
{

}
