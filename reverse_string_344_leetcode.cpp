#include "reverse_string_344_leetcode.h"

void printVec(const vector<char> &s)
{
    for(auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
}

void reverse_string_344_leetcode::reverse_string()
{
    vector<char> s = {'H', 'e', 'l', 'l', 'o'};

    printVec(s);

//    char temp;

//    for(unsigned i = 0; i < s.size() / 2; i++)
//    {
//        temp = s[i];
//        s[i] = s[s.size() - 1 - i];
//        s[s.size() - 1 - i] = temp;
//    }

    for(int i = 0, j = s.size() - 1; i < j; i++, j--)
    {
        swap(s[i], s[j]);
    }

    printVec(s);
}

reverse_string_344_leetcode::reverse_string_344_leetcode()
{

}
