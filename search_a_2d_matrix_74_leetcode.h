#ifndef SEARCH_A_2D_MATRIX_74_LEETCODE_H
#define SEARCH_A_2D_MATRIX_74_LEETCODE_H

#include "vector"

using namespace std;

//    74. Search a 2D Matrix

//    Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

//    Integers in each row are sorted from left to right.
//    The first integer of each row is greater than the last integer of the previous row.

class search_a_2D_matrix_74_leetcode
{
public:
    search_a_2D_matrix_74_leetcode();

    static bool search_matrix();
    static void binary_search(const vector<vector <int>> &nums,
                       int &left_side,
                       int &right_side,
                       int &middle,
                       const int &target,
                       int &i,
                       int &j);
};

#endif // SEARCH_A_2D_MATRIX_74_LEETCODE_H
