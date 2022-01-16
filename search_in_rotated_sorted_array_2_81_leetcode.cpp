#include "search_in_rotated_sorted_array_2_81_leetcode.h"

int search_in_rotated_sorted_array_2_81_leetcode::find_pivot(const vector<int> &nums,
                                                           int left_side,
                                                           int right_side)
{
    if(right_side < left_side)
    {
        return false;
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

int search_in_rotated_sorted_array_2_81_leetcode::binary_search(const vector<int> &nums,
                                                              int left_side,
                                                              int right_side,
                                                              const int &target)
{
    if(left_side > right_side)
    {
        return false;
    }

    int middle = left_side + (right_side - left_side) / 2; // (right_side + left_side) / 2

    if(target == nums[middle])
    {
        return true;
    }

    bool check = true;


    if(target > nums[middle])
    {
        while(check)
        {
            if(nums[middle] == nums[middle + 1])
            {
                middle++;
            }
            else
            {
                check = false;
            }
        }

        return binary_search(nums, (middle + 1), right_side, target);
    }

    check = true;

    while(check)
    {
        if(nums[middle] == nums[middle - 1])
        {
            middle--;
        }
        else
        {
            check = false;
        }
    }

    return binary_search(nums, left_side, (middle - 1), target);
}

int search_in_rotated_sorted_array_2_81_leetcode::binary_search_with_finded_pivot()
{
    vector<int> nums = {0, 1, 2, 4, 4, 4, 5, 6, 6, 6, 6, 7};
    int left_side = 0;
    int right_side = nums.size() - 1;
    int target = 5;

    srand(time(nullptr));
    random_rotate_array(nums, 1 + rand() % (nums.size() - 1));

    int pivot = find_pivot(nums, left_side, right_side);

    if(pivot == -1)
    {
        return binary_search(nums, left_side, right_side, target);
    }

    if(nums[pivot] == target)
    {
        return true;
    }

    if(nums[left_side] > target)
    {
        return binary_search(nums, pivot + 1, right_side, target);
    }

    return binary_search(nums, left_side, pivot - 1, target);
}

int search_in_rotated_sorted_array_2_81_leetcode::random_rotate_array(vector<int> &nums,
                                                                       int count_rotate)
{
    int temp = 0;

    for(int rotate = 0; rotate < count_rotate; rotate++){
        temp = nums[nums.size() - 1];

        for(int i = nums.size() - 1; i >= 0; i--)
        {
            if(i != 0)
            {
                nums[i] = nums[i - 1];
            }
            else
            {
                nums[0] = temp;
            }
        }
    }

    cout << "Array after random rotated: ";

    for(unsigned i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

search_in_rotated_sorted_array_2_81_leetcode::search_in_rotated_sorted_array_2_81_leetcode()
{

}
