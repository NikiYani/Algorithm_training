#ifndef SEARCH_IN_ROTATED_SORTED_ARRAY_2_81_LEETCODE_H
#define SEARCH_IN_ROTATED_SORTED_ARRAY_2_81_LEETCODE_H

//    There is an integer array nums sorted in non-decreasing order
//    (not necessarily with distinct values).

//    Before being passed to your function, nums is rotated at an unknown
//    pivot index k (0 <= k < nums.length) such that the resulting array is
//    [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
//    For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

//    Given the array nums after the rotation and an integer target,
//    return true if target is in nums, or false if it is not in nums.

//    You must decrease the overall operation steps as much as possible.

#include <vector>
#include <iostream>
#include <time.h>

using namespace std;

class search_in_rotated_sorted_array_2_81_leetcode
{
public:
    search_in_rotated_sorted_array_2_81_leetcode();

    static int find_pivot(const vector<int> &nums,
                   int left_side,
                   int right_side);
    static int binary_search(const vector<int> &nums,
                      int left_side,
                      int right_side,
                      const int &target);
    static int binary_search_with_finded_pivot();
    static int random_rotate_array(vector<int> &nums,
                                   int count_rotate);
};

#endif // SEARCH_IN_ROTATED_SORTED_ARRAY_2_81_LEETCODE_H
