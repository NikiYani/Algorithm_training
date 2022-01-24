#ifndef MERGE_INTERVALS_56_LEETCODE_H
#define MERGE_INTERVALS_56_LEETCODE_H

//    Given an array of intervals where intervals[i] = [starti, endi],
//            merge all overlapping intervals,
//    and return an array of the non-overlapping intervals that cover
//            all the intervals in the input.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class merge_intervals_56_leetcode
{
public:
    merge_intervals_56_leetcode();

    static void merge(vector<vector<int>>& intervals);
    static void merge_intervals();
};

#endif // MERGE_INTERVALS_56_LEETCODE_H
