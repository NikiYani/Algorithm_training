#include "linked_list_cycle_141_leetcode.h"

bool linked_list_cycle_141_leetcode::hasCycle(ListNode *head) {

    ListNode *temp;

    while(head != nullptr)
    {
        temp = head->next;

        while(temp != nullptr)
        {
            if(head->next == temp->next)
            {
                return true;
            }
            else
            {
                if(head == temp->next)
                {
                    return true;
                }
                else
                {
                    temp = temp->next;
                }
            }
        }

        head = head->next;
    }

    return false;
}

bool linked_list_cycle_141_leetcode::generatingList()
{
    ListNode *list = new ListNode(0);
    list->next = new ListNode(1);
    list->next->next = new ListNode(2);
    list->next->next->next = new ListNode(3);

    return hasCycle(list);
}

linked_list_cycle_141_leetcode::linked_list_cycle_141_leetcode()
{

}
