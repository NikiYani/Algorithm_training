#include "single_number_136_leetcode.h"

int single_number_136_leetcode::single_number()
{
    vector<int> nums = {1, 2, 3, 8, 1, 2, 3};

    for(unsigned i = 0; i < nums.size(); i++)
    {
        for(unsigned j = 0; j < nums.size(); j++)
        {
            if(i != j)
            {
                if(nums[i] == nums[j])
                {
                    break;
                }
                else
                {
                    if(j == nums.size() - 1)
                    {
                        return nums[i];
                    }
                }
            }
        }
    }

    return -1;
}

single_number_136_leetcode::single_number_136_leetcode()
{

}
