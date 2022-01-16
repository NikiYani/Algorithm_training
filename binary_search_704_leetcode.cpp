#include "binary_search_704_leetcode.h"
#include <vector>
#include <random>
#include <time.h>
#include <iostream>
#include <algorithm>

using namespace std;

int Binary_search_704_leetcode::search()
{
    vector<int> nums;

    srand(time(0));

    int m = 5 + rand() % 100;

    for(int i = 0; i < m; i++)
    {
        nums.push_back(rand() % 50);
    }

    sort(nums.begin(), nums.end());

    for(auto it : nums)
    {
        cout << it << " ";
    }
    cout << endl;

    int target = rand() % 50,
        left_side = 0,
        right_side = nums.size() - 1,
        middle = 0;

    while(left_side < right_side)
    {
        middle = left_side + (right_side - left_side) / 2;

        if(target <= nums[middle])
        {
            right_side = middle;
        }
        else
        {
            left_side = middle + 1;
        }
    }

    if(target == nums[right_side])
    {
        return nums[right_side];
    }
    else
    {
        return -1;
    }
}

Binary_search_704_leetcode::Binary_search_704_leetcode()
{

}
