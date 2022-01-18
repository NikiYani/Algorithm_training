#include "valid_parentheses_20_leetcode.h"

bool valid_parentheses_20_leetcode::check_parentheses(string str)
{
    stack<char> stack_parentheses;
    bool check = true;

    for(int i = 0; check; i++)
    {
        if(str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            check = false;
        }
        else
        {
            stack_parentheses.push(str[i]);
        }
    }

    int stack_size = stack_parentheses.size();

    check = true;
    for(int i = 0; check, i < stack_size; i++)
    {
        if(stack_parentheses.top() == '(' && str[stack_size + i] == ')')
        {
            stack_parentheses.pop();
        }
        else
        {
            if(stack_parentheses.top() == '{' && str[stack_size + i] == '}')
            {
                stack_parentheses.pop();
            }
            else
            {
                if(stack_parentheses.top() == '[' && str[stack_size + i] == ']')
                {
                    stack_parentheses.pop();
                }
                else
                {
                    check = false;
                }
            }
        }
    }

    if(check)
    {
        if((int)str.size() != (stack_size * 2))
        {
            check_parentheses(str.erase(0, stack_size * 2));
        }

        return true;
    }
    else
    {
        return false;
    }
}

valid_parentheses_20_leetcode::valid_parentheses_20_leetcode()
{

}
