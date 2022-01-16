#include "find_minimum_in_rotated_sorted_array_153_leetcode.h"

int find_minimum_in_rotated_sorted_array_153_leetcode::find_pivot(const vector<int> &nums,
                      int left_side,
                      int right_side)
{
    if(left_side > right_side || left_side == right_side)
    {
        return nums[left_side];
    }

    int middle = left_side + (right_side - left_side) / 2;

    if(middle < right_side && nums[middle] > nums[middle + 1])
    {
        cout << "Minimum: ";
        return nums[middle + 1];
    }

    if(middle > left_side && nums[middle] < nums[middle - 1])
    {
        cout << "Minimum: ";
        return nums[middle];
    }

    if(nums[left_side] > nums[middle])
    {
        return find_pivot(nums, left_side, middle - 1);
    }

    return find_pivot(nums, middle + 1, right_side);
}

int find_minimum_in_rotated_sorted_array_153_leetcode::find_minimun()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int left_side = 0;
    int right_side = nums.size() - 1;

    srand(time(nullptr));
    random_rotate_array(nums, 1 + rand() % (nums.size() - 1));

    return find_pivot(nums, left_side, right_side);
}

void find_minimum_in_rotated_sorted_array_153_leetcode::random_rotate_array(vector<int> &nums,
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

find_minimum_in_rotated_sorted_array_153_leetcode::find_minimum_in_rotated_sorted_array_153_leetcode()
{

}
