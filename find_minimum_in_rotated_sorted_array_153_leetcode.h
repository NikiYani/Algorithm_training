#ifndef FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_153_LEETCODE_H
#define FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_153_LEETCODE_H

//    Suppose an array of length n sorted in ascending order is rotated between 1 and n times.
//    For example, the array nums = [0,1,2,4,5,6,7] might become:

//    [4,5,6,7,0,1,2] if it was rotated 4 times.
//    [0,1,2,4,5,6,7] if it was rotated 7 times.
//    Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

//    Given the sorted rotated array nums of unique elements, return the minimum element of this array.

//    You must write an algorithm that runs in O(log n) time.

#include <vector>
#include <iostream>
#include <time.h>

using namespace std;

class find_minimum_in_rotated_sorted_array_153_leetcode
{
public:
    find_minimum_in_rotated_sorted_array_153_leetcode();
    static int find_pivot(const vector<int> &nums,
                   int left_side,
                   int right_side);
    static int find_minimun();
    static void random_rotate_array(vector<int> &nums,
                                    int count_rotate);
};

#endif // FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_153_LEETCODE_H
