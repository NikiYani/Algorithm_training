#ifndef VALID_PARENTHESES_20_LEETCODE_H
#define VALID_PARENTHESES_20_LEETCODE_H

//    Given a string s containing just the characters
//    '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

//    An input string is valid if:

//    Open brackets must be closed by the same type of brackets.
//    Open brackets must be closed in the correct order.

#include <string>
#include <stack>
#include <iostream>

using namespace std;

class valid_parentheses_20_leetcode
{
public:
    valid_parentheses_20_leetcode();
    static bool check_parentheses(string str = "()[]{}");
};

#endif // VALID_PARENTHESES_20_LEETCODE_H
