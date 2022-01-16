#include "search_a_2d_matrix_74_leetcode.h"
#include "random"
#include "time.h"
#include "iostream"

void search_a_2D_matrix_74_leetcode::binary_search(const vector<vector <int>> &nums,
                                                   int &left_side,
                                                   int &right_side,
                                                   int &middle,
                                                   const int &target,
                                                   int &i,
                                                   int &j)
{
    while(left_side < right_side)
    {
        middle = left_side + (right_side - left_side) / 2;

        if(target <= nums[i][j])
        {
            right_side = middle;
        }
        else
        {
            left_side = middle + 1;
        }
    }
}

bool search_a_2D_matrix_74_leetcode::search_matrix()
{
    vector<vector <int>> nums = {{1,3,5,7},
                                {10,11,16,20},
                                {23,30,34,60}};

    int target = 60,
        left_side = 0,
        right_side = nums.size() - 1,
        middle = 0,
        zero = 0;

    binary_search(nums, left_side, right_side, middle, target, middle, zero);

    int result_sub_vec = 0;

    if(target >= nums[right_side][0])
    {
        result_sub_vec = right_side;
    }
    else
    {
        result_sub_vec = middle;
    }

    left_side = 0;
    right_side = nums[result_sub_vec].size() - 1;
    middle = 0;

    binary_search(nums, left_side, right_side, middle, target, result_sub_vec, middle);

    if(target == nums[result_sub_vec][right_side])
    {
        return true;
    }
    else
    {
        return false;
    }
}

search_a_2D_matrix_74_leetcode::search_a_2D_matrix_74_leetcode()
{

}
