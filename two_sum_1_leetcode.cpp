#include "two_sum_1_leetcode.h"

void two_sum_1_leetcode::print_vector()
{
    vector<int> vec = two_sum();
    cout << vec[0] << vec[1] << endl;
}

vector<int> two_sum_1_leetcode::two_sum()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int target = 7;

    for(unsigned i = 0; i < nums.size(); i++)
    {
        for(unsigned j = 0; j < nums.size(); j++)
        {
            if(i != j)
            {
                if(nums[i] + nums[j] == target)
                {
                    return vector<int> {(int)i, (int)j};
                }
            }
        }
    }
}

two_sum_1_leetcode::two_sum_1_leetcode()
{

}
