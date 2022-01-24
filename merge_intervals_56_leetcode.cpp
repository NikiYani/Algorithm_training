#include "merge_intervals_56_leetcode.h"

void merge_intervals_56_leetcode::merge(vector<vector<int>>& intervals)
{
    bool check = true;

    while(check)
    {
        check = false;

        for(unsigned i = 0; i < intervals.size() - 1; i++)
        {
            if(intervals[i].back() >= intervals[i + 1].front()
                    && intervals[i].front() <= intervals[i + 1].back())
            {
                if(intervals[i].front() >= intervals[i + 1].front())
                {
                    intervals[i].front() = intervals[i + 1].front();
                }

                if(intervals[i].back() <= intervals[i + 1].back())
                {
                    intervals[i].back() = intervals[i + 1].back();
                }

                auto iter = intervals.begin() + i + 1;
                intervals.erase(iter);

                check = true;
            }
        }
    }
}

void merge_intervals_56_leetcode::merge_intervals()
{
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};

    merge(intervals);
}

merge_intervals_56_leetcode::merge_intervals_56_leetcode()
{

}
