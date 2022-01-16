#include "search_in_rotated_sorted_array_33_leetcode.h"

int search_in_rotated_sorted_array_33_leetcode::find_pivot(const vector<int> &nums,
                                                           int left_side,
                                                           int right_side)
{
    if(right_side < left_side)
    {
        return -1;
    }

    if(right_side == left_side)
    {
        return right_side;
    }

    int middle = left_side + (right_side - left_side) / 2;

    if(middle < right_side && nums[middle] > nums[middle + 1])
    {
        return middle;
    }

    if(middle > left_side && nums[middle] < nums[middle - 1])
    {
        return middle - 1;
    }

    if(nums[left_side] > nums[middle])
    {
        return find_pivot(nums, left_side, middle - 1);
    }

    return  find_pivot(nums, middle + 1, right_side);

}

int search_in_rotated_sorted_array_33_leetcode::binary_search(const vector<int> &nums,
                                                              int left_side,
                                                              int right_side,
                                                              const int &target)
{
    if(left_side > right_side)
    {
        return -1;
    }

    int middle = left_side + (right_side - left_side) / 2; // (right_side + left_side) / 2

    if(target == nums[middle])
    {
        return target;
    }

    if(target > nums[middle])
    {
        return binary_search(nums, (middle + 1), right_side, target);
    }

    return binary_search(nums, left_side, (middle - 1), target);
}

int search_in_rotated_sorted_array_33_leetcode::binary_search_with_finded_pivot()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int left_side = 0;
    int right_side = nums.size() - 1;
    int target = 4;

    int pivot = find_pivot(nums, left_side, right_side);

    if(pivot == -1)
    {
        return binary_search(nums, left_side, right_side, target);
    }

    if(nums[pivot] == target)
    {
        return target;
    }

    if(nums[left_side] > target)
    {
        return binary_search(nums, pivot + 1, right_side, target);
    }

    return binary_search(nums, left_side, pivot - 1, target);
}

search_in_rotated_sorted_array_33_leetcode::search_in_rotated_sorted_array_33_leetcode()
{

}
