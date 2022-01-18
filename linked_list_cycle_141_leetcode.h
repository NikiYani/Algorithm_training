#ifndef LINKED_LIST_CYCLE_141_LEETCODE_H
#define LINKED_LIST_CYCLE_141_LEETCODE_H

//    Given head, the head of a linked list, determine if the linked list has a cycle in it.

//    There is a cycle in a linked list if there is some node
//    in the list that can be reached again by continuously
//    following the next pointer.
//    Internally, pos is used to denote the index of the node that
//    tail's next pointer is connected to. Note that pos is not passed as a parameter.

//    Return true if there is a cycle in the linked list. Otherwise, return false.

#include <cassert>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <memory>
#include <stdexcept>

using namespace std;

struct ListNode {
    ListNode();
    ListNode(ListNode &ln) : val(ln.val), next(ln.next){};
    ListNode(int x) : val(x), next(nullptr) {}
    int val;
    ListNode *next;
};

class linked_list_cycle_141_leetcode
{
public:
    linked_list_cycle_141_leetcode();
    static bool hasCycle(ListNode *head);
    static bool generatingList();

};

#endif // LINKED_LIST_CYCLE_141_LEETCODE_H
